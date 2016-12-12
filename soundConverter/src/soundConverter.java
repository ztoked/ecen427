import java.io.*;

public class soundConverter {
	
	public static void main(String [] args) {
		// The name of the file to open.
        String inFileName = args[0];
        String outFileName = args[1] + ".c";
        String outPrefix = args[1];
        
        try {
        	FileInputStream in = new FileInputStream(inFileName);
        	FileWriter fileWriter = new FileWriter(outFileName);

            // Always wrap FileReader in BufferedReader.
        	BufferedWriter out = new BufferedWriter(fileWriter);
        	
        	int sampleRate = 0;
        	int numSamples = 0;
        	int[] b = new int[4];
        	in.skip(24);
        	for(int i = 0; i < 4; ++i) {
        		b[i] = in.read();
        	}
        	sampleRate = ((b[3] & 0xFF) << 24) 
        			   + ((b[2] & 0xFF) << 16) 
        			   + ((b[1] & 0xFF) << 8) 
        			   + (b[0] & 0xFF);
        	in.skip(12);
        	for(int i = 0; i < 4; ++i) {
        		b[i] = in.read();
        	}
        	numSamples = ((b[3] & 0xFF) << 24) 
     			   + ((b[2] & 0xFF) << 16) 
     			   + ((b[1] & 0xFF) << 8) 
     			   + (b[0] & 0xFF);
        	out.write("#include <stdio.h>\n#include <stdint.h>\n");
        	out.write("uint32_t " + outPrefix + "Rate = " + sampleRate + ";\n" + "uint32_t " + outPrefix + "Samples = " + numSamples + ";\n\n");
        	
        	out.write("uint8_t " + outPrefix + "Data[] = {");
        	int index = 0;
        	while(in.available() > 1) {
        		if(index % 10 == 0) {
        			out.write("\n\t");
        		}
        		out.write("" + in.read() + ", ");
        		++index;
        	}
        	out.write("" + in.read() + "};\n");
            
            in.close();
            out.close();
        }
        catch(FileNotFoundException ex) {
            System.out.println(
                "Unable to open file '" + 
                		inFileName + "'");                
        }
        catch(IOException ex) {
            System.out.println("Error reading file '" + inFileName + "'");
        }
	}
}
