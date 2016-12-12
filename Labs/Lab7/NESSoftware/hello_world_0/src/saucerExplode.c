#include <stdio.h>
#include <stdint.h>
uint32_t saucerExplodeRate = 11025;
uint32_t saucerExplodeSamples = 3377;

uint8_t saucerExplodeData[] = {
	128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	128, 128, 128, 128, 128, 128, 144, 164, 145, 111, 
	95, 91, 100, 106, 126, 134, 108, 109, 123, 160, 
	158, 118, 101, 144, 189, 110, 79, 154, 202, 117, 
	16, 96, 208, 187, 65, 100, 192, 175, 93, 0, 
	106, 253, 137, 17, 140, 242, 103, 1, 134, 255, 
	134, 4, 110, 230, 118, 1, 149, 255, 89, 6, 
	160, 255, 110, 0, 60, 177, 255, 81, 27, 207, 
	170, 43, 61, 200, 179, 23, 104, 245, 112, 11, 
	102, 210, 217, 39, 73, 237, 114, 29, 57, 173, 
	255, 91, 0, 145, 255, 138, 10, 62, 171, 252, 
	84, 0, 172, 244, 46, 47, 207, 190, 74, 0, 
	141, 255, 147, 16, 65, 191, 215, 30, 84, 224, 
	163, 78, 0, 128, 255, 124, 0, 149, 255, 102, 
	0, 138, 249, 169, 63, 0, 166, 255, 62, 24, 
	195, 229, 33, 78, 224, 163, 70, 0, 145, 255, 
	100, 0, 161, 255, 92, 0, 163, 255, 95, 0, 
	134, 246, 191, 77, 0, 125, 255, 130, 0, 88, 
	198, 226, 95, 0, 122, 255, 158, 43, 53, 213, 
	178, 21, 99, 214, 200, 49, 39, 198, 214, 75, 
	0, 131, 255, 134, 6, 104, 219, 179, 18, 105, 
	251, 104, 4, 106, 228, 204, 45, 51, 185, 247, 
	76, 0, 178, 244, 39, 52, 199, 220, 85, 0, 
	105, 255, 182, 35, 99, 254, 96, 0, 118, 207, 
	243, 84, 0, 137, 255, 124, 0, 140, 253, 121, 
	43, 19, 162, 255, 147, 15, 60, 180, 255, 62, 
	26, 196, 222, 91, 0, 135, 255, 96, 0, 178, 
	255, 76, 6, 179, 255, 80, 0, 166, 255, 108, 
	0, 110, 255, 92, 0, 122, 228, 215, 57, 24, 
	181, 252, 75, 0, 118, 255, 134, 1, 133, 214, 
	188, 65, 0, 163, 255, 95, 0, 143, 255, 126, 
	34, 48, 193, 255, 65, 22, 208, 201, 50, 31, 
	209, 199, 42, 70, 190, 251, 57, 11, 190, 221, 
	87, 0, 140, 255, 129, 27, 88, 209, 202, 54, 
	28, 186, 251, 94, 0, 144, 255, 82, 4, 190, 
	255, 60, 19, 202, 220, 42, 55, 212, 186, 35, 
	78, 221, 169, 27, 95, 213, 189, 75, 0, 146, 
	255, 113, 0, 169, 255, 83, 0, 118, 241, 164, 
	25, 107, 202, 212, 79, 0, 133, 255, 153, 42, 
	62, 216, 164, 7, 148, 229, 154, 54, 0, 185, 
	255, 65, 9, 197, 232, 54, 34, 189, 244, 80, 
	0, 113, 238, 210, 40, 90, 214, 159, 51, 2, 
	197, 218, 59, 31, 192, 255, 70, 8, 168, 255, 
	122, 0, 117, 235, 92, 7, 130, 234, 188, 16, 
	124, 229, 121, 46, 15, 178, 255, 104, 0, 142, 
	255, 87, 0, 156, 254, 131, 25, 100, 212, 183, 
	64, 6, 164, 255, 107, 8, 97, 179, 255, 99, 
	0, 121, 229, 155, 44, 87, 214, 181, 60, 35, 
	175, 255, 119, 15, 50, 167, 255, 98, 0, 171, 
	241, 113, 14, 97, 238, 127, 19, 159, 252, 91, 
	0, 162, 251, 126, 21, 102, 212, 172, 62, 15, 
	174, 255, 90, 0, 163, 229, 169, 49, 14, 189, 
	231, 78, 0, 147, 255, 127, 31, 120, 221, 148, 
	36, 86, 227, 127, 20, 131, 215, 195, 38, 70, 
	205, 178, 66, 0, 167, 255, 103, 5, 139, 215, 
	175, 73, 0, 176, 255, 122, 15, 104, 213, 164, 
	68, 0, 179, 255, 73, 22, 197, 245, 65, 0, 
	175, 255, 88, 0, 167, 242, 116, 39, 41, 198, 
	242, 67, 12, 171, 255, 105, 0, 149, 224, 142, 
	29, 88, 195, 198, 63, 0, 192, 241, 66, 10, 
	180, 255, 90, 0, 177, 250, 63, 24, 191, 236, 
	85, 0, 135, 247, 98, 29, 134, 222, 197, 50, 
	52, 200, 209, 58, 19, 196, 230, 59, 20, 175, 
	255, 103, 0, 158, 239, 80, 0, 148, 209, 206, 
	71, 0, 192, 234, 56, 28, 189, 255, 85, 0, 
	149, 237, 135, 51, 38, 174, 255, 92, 0, 145, 
	211, 150, 63, 7, 189, 255, 61, 17, 184, 255, 
	119, 21, 52, 182, 240, 63, 0, 190, 245, 86, 
	4, 126, 229, 169, 62, 55, 195, 246, 55, 13, 
	192, 243, 65, 0, 181, 251, 118, 42, 38, 187, 
	255, 68, 0, 186, 255, 131, 45, 29, 182, 255, 
	83, 0, 148, 211, 187, 81, 0, 181, 255, 84, 
	9, 158, 240, 91, 11, 181, 249, 99, 19, 117, 
	229, 107, 33, 121, 215, 206, 38, 87, 213, 153, 
	47, 47, 211, 177, 32, 119, 225, 128, 24, 145, 
	236, 91, 31, 121, 208, 215, 61, 0, 181, 255, 
	85, 2, 165, 228, 99, 28, 92, 213, 194, 39, 
	108, 211, 164, 66, 0, 189, 255, 109, 42, 53, 
	202, 227, 62, 20, 179, 255, 99, 20, 97, 192, 
	219, 59, 1, 190, 255, 84, 23, 83, 186, 255, 
	62, 0, 191, 236, 66, 0, 193, 242, 59, 28, 
	208, 212, 56, 30, 181, 255, 65, 8, 198, 221, 
	46, 31, 204, 203, 42, 63, 213, 176, 53, 49, 
	194, 251, 60, 6, 167, 246, 92, 19, 133, 199, 
	211, 60, 0, 170, 252, 126, 32, 104, 209, 149, 
	41, 81, 204, 192, 42, 74, 218, 159, 49, 73, 
	193, 250, 78, 0, 170, 235, 67, 15, 177, 252, 
	87, 31, 126, 195, 243, 68, 0, 180, 230, 64, 
	8, 158, 242, 130, 40, 109, 191, 223, 64, 0, 
	170, 228, 151, 47, 38, 200, 213, 63, 0, 152, 
	243, 167, 39, 124, 222, 105, 54, 43, 190, 255, 
	57, 14, 175, 235, 142, 28, 91, 194, 171, 46, 
	23, 201, 240, 69, 7, 143, 239, 145, 34, 157, 
	238, 79, 41, 86, 190, 255, 59, 0, 191, 234, 
	112, 40, 43, 197, 248, 57, 3, 194, 255, 70, 
	17, 191, 232, 83, 13, 107, 209, 190, 54, 41, 
	209, 217, 52, 25, 205, 239, 54, 20, 192, 251, 
	113, 29, 43, 190, 253, 52, 0, 145, 235, 165, 
	34, 133, 224, 116, 33, 94, 212, 165, 33, 99, 
	230, 109, 23, 182, 233, 110, 32, 106, 218, 148, 
	30, 128, 232, 86, 15, 191, 240, 96, 42, 73, 
	201, 252, 45, 6, 208, 238, 53, 0, 157, 247, 
	130, 41, 104, 190, 243, 42, 0, 176, 222, 140, 
	44, 6, 201, 255, 57, 0, 169, 216, 175, 49, 
	16, 217, 203, 32, 72, 213, 185, 45, 51, 226, 
	176, 36, 89, 201, 250, 69, 0, 177, 227, 53, 
	21, 152, 245, 149, 39, 94, 200, 250, 59, 0, 
	134, 216, 146, 27, 144, 224, 121, 45, 46, 214, 
	240, 31, 64, 225, 157, 40, 91, 205, 206, 43, 
	16, 212, 254, 75, 0, 160, 236, 78, 37, 118, 
	215, 215, 35, 68, 209, 196, 46, 2, 209, 241, 
	60, 1, 174, 249, 80, 38, 139, 213, 221, 43, 
	0, 182, 242, 134, 20, 100, 205, 161, 49, 5, 
	209, 255, 44, 34, 223, 219, 44, 21, 187, 255, 
	64, 25, 136, 225, 168, 15, 134, 204, 139, 34, 
	36, 210, 219, 50, 6, 216, 237, 34, 58, 209, 
	222, 53, 0, 188, 230, 140, 36, 65, 227, 142, 
	41, 86, 218, 211, 29, 82, 218, 165, 37, 51, 
	206, 239, 34, 3, 220, 214, 41, 33, 203, 255, 
	54, 4, 172, 232, 98, 25, 145, 212, 137, 28, 
	93, 209, 173, 42, 23, 224, 207, 27, 94, 219, 
	179, 50, 6, 198, 255, 97, 26, 149, 222, 92, 
	34, 103, 212, 212, 39, 27, 211, 252, 69, 0, 
	160, 225, 89, 30, 132, 219, 163, 37, 75, 218, 
	195, 39, 36, 228, 196, 32, 84, 226, 152, 25, 
	130, 209, 151, 39, 48, 228, 167, 40, 69, 209, 
	251, 38, 22, 214, 224, 35, 2, 170, 241, 104, 
	26, 161, 204, 178, 41, 0, 207, 250, 90, 23, 
	118, 224, 112, 33, 144, 222, 137, 51, 53, 206, 
	254, 55, 4, 183, 214, 132, 46, 5, 213, 255, 
	42, 30, 172, 231, 167, 32, 45, 213, 202, 17, 
	86, 227, 113, 49, 85, 213, 252, 29, 32, 229, 
	189, 40, 32, 191, 254, 83, 13, 165, 220, 73, 
	35, 108, 222, 208, 34, 63, 219, 213, 35, 14, 
	195, 235, 137, 43, 0, 201, 255, 45, 34, 159, 
	229, 161, 30, 83, 220, 162, 41, 54, 205, 248, 
	38, 19, 177, 224, 170, 31, 25, 226, 198, 31, 
	71, 215, 236, 38, 0, 206, 237, 52, 31, 216, 
	217, 34, 22, 218, 249, 74, 16, 156, 222, 62, 
	28, 216, 241, 68, 17, 142, 220, 89, 19, 191, 
	227, 81, 42, 84, 207, 255, 35, 0, 180, 207, 
	157, 33, 51, 223, 180, 38, 42, 226, 230, 23, 
	63, 222, 188, 40, 9, 205, 255, 66, 45, 107, 
	209, 252, 26, 0, 213, 227, 84, 18, 140, 213, 
	132, 51, 24, 208, 255, 65, 39, 213, 222, 40, 
	26, 115, 215, 242, 27, 21, 224, 225, 48, 11, 
	155, 229, 123, 47, 119, 220, 168, 23, 121, 212, 
	129, 46, 25, 204, 255, 77, 29, 170, 206, 124, 
	46, 24, 202, 255, 63, 37, 208, 219, 46, 17, 
	166, 223, 91, 35, 179, 228, 70, 41, 135, 215, 
	214, 22, 20, 230, 192, 28, 83, 214, 191, 30, 
	32, 227, 207, 30, 71, 229, 169, 40, 61, 199, 
	248, 70, 19, 153, 205, 123, 42, 78, 221, 193, 
	22, 104, 209, 169, 42, 6, 215, 246, 58, 41, 
	203, 218, 46, 17, 192, 221, 73, 41, 135, 227, 
	154, 45, 75, 202, 242, 59, 12, 173, 201, 45, 
	44, 149, 232, 171, 40, 72, 208, 230, 27, 10, 
	215, 203, 38, 45, 217, 226, 30, 31, 217, 210, 
	36, 26, 202, 223, 134, 45, 34, 227, 213, 32, 
	65, 221, 194, 36, 47, 198, 231, 115, 24, 93, 
	197, 170, 32, 54, 228, 179, 44, 56, 198, 238, 
	128, 44, 39, 213, 227, 23, 44, 218, 212, 46, 
	20, 163, 220, 104, 61, 101, 212, 245, 43, 26, 
	106, 201, 236, 30, 15, 213, 218, 55, 46, 122, 
	214, 203, 24, 73, 215, 163, 37, 66, 224, 174, 
	42, 69, 198, 235, 92, 42, 84, 200, 226, 27, 
	23, 212, 209, 65, 38, 151, 217, 98, 45, 188, 
	210, 94, 61, 70, 210, 242, 65, 47, 73, 203, 
	247, 27, 38, 145, 206, 219, 30, 16, 155, 224, 
	152, 44, 116, 203, 177, 37, 28, 198, 227, 82, 
	47, 153, 199, 123, 44, 103, 219, 130, 42, 169, 
	197, 120, 52, 41, 188, 239, 80, 49, 181, 206, 
	68, 45, 163, 196, 166, 35, 37, 227, 180, 41, 
	92, 221, 170, 41, 101, 211, 172, 46, 40, 199, 
	223, 53, 60, 138, 218, 182, 27, 106, 201, 130, 
	49, 49, 188, 234, 115, 46, 137, 203, 88, 49, 
	174, 196, 119, 53, 65, 210, 210, 31, 32, 194, 
	214, 72, 51, 198, 199, 50, 43, 167, 208, 79, 
	50, 188, 205, 85, 49, 136, 193, 160, 43, 33, 
	217, 220, 79, 55, 103, 206, 199, 36, 49, 219, 
	189, 41, 76, 213, 198, 36, 38, 183, 216, 99, 
	62, 89, 202, 234, 47, 40, 167, 198, 94, 45, 
	182, 194, 90, 60, 69, 214, 218, 44, 77, 210, 
	188, 33, 45, 139, 213, 205, 36, 50, 217, 191, 
	42, 43, 185, 215, 90, 69, 100, 204, 220, 34, 
	61, 208, 186, 41, 37, 168, 206, 128, 57, 113, 
	205, 172, 41, 68, 220, 163, 50, 83, 206, 215, 
	48, 41, 162, 194, 124, 62, 70, 190, 224, 65, 
	59, 205, 184, 41, 52, 208, 199, 61, 49, 145, 
	202, 112, 61, 147, 202, 142, 47, 105, 204, 147, 
	45, 100, 207, 156, 47, 89, 206, 176, 33, 106, 
	205, 116, 64, 85, 197, 218, 62, 59, 124, 200, 
	179, 33, 92, 207, 137, 49, 110, 194, 170, 40, 
	59, 219, 168, 47, 93, 206, 186, 39, 52, 149, 
	213, 184, 37, 66, 209, 191, 45, 42, 202, 184, 
	50, 73, 133, 224, 186, 35, 112, 191, 150, 45, 
	42, 201, 206, 70, 62, 160, 194, 118, 60, 105, 
	207, 172, 46, 67, 205, 195, 44, 72, 206, 181, 
	44, 49, 181, 200, 107, 66, 116, 198, 174, 43, 
	51, 164, 216, 121, 51, 175, 179, 89, 61, 95, 
	210, 158, 53, 100, 205, 186, 39, 51, 169, 206, 
	119, 65, 88, 183, 211, 59, 60, 200, 176, 59, 
	61, 116, 203, 190, 41, 75, 212, 177, 46, 59, 
	197, 196, 65, 68, 164, 195, 105, 57, 168, 181, 
	87, 66, 109, 201, 191, 40, 51, 192, 194, 120, 
	64, 80, 205, 203, 50, 54, 195, 182, 79, 73, 
	99, 210, 190, 50, 83, 203, 192, 45, 56, 174, 
	188, 86, 65, 196, 176, 46, 79, 208, 169, 49, 
	68, 193, 198, 100, 70, 84, 202, 199, 44, 65, 
	125, 207, 181, 51, 81, 200, 190, 47, 60, 172, 
	184, 84, 67, 188, 185, 84, 65, 144, 195, 107, 
	73, 111, 194, 206, 60, 61, 149, 184, 111, 60, 
	167, 177, 104, 69, 80, 206, 192, 58, 79, 199, 
	173, 55, 83, 140, 205, 175, 29, 47, 181, 184, 
	78, 83, 102, 195, 204, 54, 73, 107, 198, 187, 
	47, 78, 144, 205, 130, 60, 94, 189, 193, 66, 
	65, 114, 196, 152, 52, 135, 182, 137, 58, 68, 
	207, 196, 78, 69, 154, 182, 93, 73, 157, 187, 
	104, 77, 103, 182, 207, 69, 72, 192, 170, 64, 
	63, 166, 177, 90, 85, 105, 188, 204, 67, 75, 
	198, 171, 64, 76, 104, 198, 203, 65, 73, 121, 
	190, 177, 43, 72, 157, 197, 167, 50, 65, 202, 
	164, 66, 88, 145, 210, 138, 63, 95, 184, 190, 
	74, 68, 111, 191, 184, 42, 71, 201, 172, 57, 
	82, 149, 198, 174, 47, 64, 187, 180, 71, 87, 
	193, 159, 56, 82, 195, 173, 62, 82, 184, 179, 
	75, 75, 156, 184, 104, 69, 148, 181, 105, 74, 
	116, 192, 178, 50, 72, 168, 183, 97, 76, 139, 
	178, 150, 51, 92, 196, 153, 55, 80, 195, 183, 
	65, 87, 195, 147, 66, 89, 167, 191, 104, 76, 
	108, 191, 162, 53, 82, 189, 178, 67, 79, 117, 
	194, 189, 48, 70, 150, 185, 116, 69, 161, 166, 
	107, 78, 89, 196, 185, 57, 86, 192, 164, 62, 
	82, 169, 182, 96, 76, 157, 170, 121, 65, 114, 
	189, 117, 78, 108, 171, 197, 116, 60, 115, 180, 
	125, 71, 97, 189, 181, 60, 89, 195, 162, 63, 
	76, 149, 184, 120, 70, 162, 168, 80, 84, 155, 
	184, 105, 80, 110, 175, 184, 68, 83, 150, 177, 
	152, 49, 71, 187, 175, 96, 79, 97, 184, 181, 
	71, 84, 170, 171, 86, 84, 131, 192, 167, 52, 
	77, 167, 178, 111, 75, 91, 179, 185, 87, 81, 
	141, 179, 114, 83, 109, 173, 188, 85, 82, 112, 
	186, 170, 55, 91, 192, 163, 60, 78, 157, 181, 
	109, 84, 138, 185, 149, 61, 83, 171, 182, 117, 
	74, 88, 193, 174, 67, 86, 120, 191, 180, 52, 
	85, 168, 174, 90, 82, 180, 156, 85, 85, 111, 
	193, 164, 65, 99, 173, 176, 107, 71, 96, 187, 
	162, 65, 98, 184, 163, 72, 90, 185, 165, 72, 
	83, 156, 175, 123, 73, 116, 189, 133, 80, 115, 
	188, 159, 59, 86, 133, 197, 157, 63, 109, 182, 
	157, 58, 82, 157, 178, 121, 75, 92, 149, 194, 
	131, 68, 87, 159, 182, 106, 77, 121, 179, 135, 
	74, 107, 180, 160, 65, 91, 169, 169, 104, 78, 
	99, 179, 173, 73, 95, 185, 160, 74, 89, 128, 
	182, 163, 57, 93, 190, 159, 70, 86, 175, 159, 
	82, 98, 146, 186, 153, 63, 83, 180, 166, 86, 
	88, 144, 171, 121, 82, 106, 184, 164, 74, 93, 
	157, 171, 104, 84, 129, 181, 148, 64, 92, 138, 
	192, 166, 55, 87, 184, 152, 70, 93, 159, 176, 
	105, 88, 155, 160, 114, 80, 124, 181, 122, 82, 
	127, 179, 150, 66, 88, 173, 171, 87, 94, 151, 
	171, 133, 69, 106, 185, 131, 77, 103, 141, 197, 
	137, 73, 127, 167, 132, 70, 86, 163, 177, 105, 
	89, 134, 171, 133, 74, 106, 186, 143, 77, 105, 
	172, 166, 79, 88, 142, 170, 122, 80, 105, 146, 
	190, 135, 71, 95, 174, 156, 73, 98, 126, 186, 
	159, 65, 90, 141, 178, 139, 75, 101, 173, 156, 
	74, 98, 156, 168, 123, 75, 115, 176, 143, 69, 
	101, 185, 145, 75, 106, 183, 149, 75, 97, 160, 
	164, 96, 96, 167, 154, 101, 82, 140, 166, 100, 
	100, 119, 159, 179, 92, 94, 130, 176, 155, 63, 
	86, 157, 164, 104, 92, 133, 175, 143, 72, 102, 
	170, 150, 85, 99, 163, 165, 100, 91, 112, 149, 
	185, 117, 80, 129, 162, 111, 87, 140, 164, 111, 
	92, 142, 163, 128, 78, 113, 176, 141, 76, 98, 
	173, 162, 106, 91, 114, 179, 148, 74, 105, 163, 
	163, 100, 89, 145, 153, 99, 100, 136, 177, 127, 
	86, 114, 138, 184, 137, 69, 94, 163, 160, 93, 
	99, 122, 177, 156, 72, 94, 150, 164, 109, 96, 
	136, 171, 131, 82, 105, 147, 175, 105, 91, 151, 
	150, 104, 96, 107, 146, 184, 118, 88, 144, 152, 
	108, 95, 119, 177, 149, 72, 102, 124, 176, 165, 
	84, 96, 136, 165, 130, 80, 108, 171, 151, 82, 
	104, 141, 170, 133, 83, 103, 150, 172, 130, 81, 
	100, 169, 157, 98, 99, 113, 169, 159, 85, 107, 
	150, 162, 120, 87, 112, 171, 151, 77, 103, 169, 
	144, 93, 102, 139, 178, 124, 94, 115, 133, 181, 
	134, 77, 102, 162, 153, 93, 95, 114, 166, 150, 
	80, 105, 145, 163, 114, 90, 146, 147, 100, 101, 
	131, 171, 138, 79, 107, 128, 178, 152, 78, 95, 
	135, 163, 130, 86, 115, 167, 143, 88, 108, 154, 
	158, 117, 89, 108, 170, 153, 89, 102, 152, 148, 
	112, 99, 113, 173, 146, 90, 109, 143, 170, 121, 
	89, 108, 143, 171, 130, 82, 108, 170, 139, 80, 
	107, 130, 173, 158, 85, 106, 127, 169, 153, 80, 
	101, 148, 154, 109, 100, 136, 160, 121, 94, 117, 
	163, 147, 93, 105, 145, 160, 110, 100, 119, 160, 
	157, 96, 103, 117, 168, 147, 81, 105, 139, 165, 
	136, 86, 103, 158, 154, 101, 105, 147, 156, 115, 
	98, 116, 156, 153, 91, 107, 161, 145, 93, 109, 
	116, 147, 174, 106, 106, 118, 138, 168, 107, 95, 
	137, 149, 116, 96, 114, 163, 148, 93, 107, 133, 
	163, 139, 83, 105, 160, 147, 96, 110, 153, 146, 
	105, 105, 117, 141, 173, 133, 84, 113, 163, 132, 
	86, 109, 126, 165, 149, 97, 108, 127, 166, 146, 
	81, 108, 146, 138, 103, 107, 153, 144, 104, 109, 
	132, 164, 130, 97, 116, 152, 149, 102, 106, 129, 
	164, 137, 83, 105, 141, 160, 125, 96, 110, 140, 
	167, 121, 101, 116, 155, 145, 94, 108, 135, 159, 
	132, 88, 108, 138, 165, 130, 94, 118, 160, 137, 
	91, 108, 138, 156, 130, 97, 114, 160, 143, 91, 
	112, 150, 141, 102, 109, 150, 145, 104, 108, 150, 
	142, 109, 108, 127, 163, 136, 91, 110, 134, 161, 
	132, 96, 112, 148, 149, 111, 101, 130, 153, 125, 
	99, 113, 137, 168, 136, 90, 108, 143, 152, 115, 
	106, 125, 153, 138, 93, 122, 154, 127, 99, 125, 
	158, 119, 103, 116, 138, 167, 122, 97, 115, 149, 
	145, 105, 108, 136, 146, 113, 109, 118, 133, 172, 
	133, 93, 109, 139, 150, 113, 108, 134, 147, 128, 
	97, 112, 151, 147, 105, 115, 126, 142, 153, 107, 
	107, 122, 148, 147, 101, 108, 130, 153, 127, 101, 
	120, 148, 139, 106, 113, 127, 160, 139, 97, 109, 
	136, 152, 123, 105, 126, 154, 138, 94, 111, 139, 
	149, 123, 105, 119, 152, 143, 106, 110, 135, 146, 
	122, 105, 118, 153, 143, 108, 113, 116, 145, 145, 
	105, 111, 124, 153, 135, 93, 114, 150, 134, 102, 
	117, 124, 148, 150, 109, 112, 123, 151, 138, 96, 
	112, 124, 152, 142, 105, 112, 125, 154, 133, 102, 
	116, 126, 154, 145, 108, 111, 115, 141, 150, 110, 
	116, 122, 133, 158, 115, 111, 128};