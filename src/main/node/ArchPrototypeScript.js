// ArchPrototypeScript.js

// clearSpanWidth SFFloat initializeOnly; user or default input for clearSpanWidth parameter
// riseHeight SFFloat initializeOnly; user or default input for riseHeight parameter
// depth SFFloat initializeOnly; user or default input for depth parameter
// topAbutmentHeight SFFloat initializeOnly; user or default input for topAbutmentHeight parameter
// pierWidth SFFloat initializeOnly; user or default input for pierWidth parameter
// pierHeight SFFloat initializeOnly; user or default input for pierHeight parameter
// archHalf SFBool initializeOnly; user or default input for archHalf parameter
// archHalfExtensionWidth SFFloat initializeOnly; user or default input for archHalfExtensionWidth parameter
// onlyIntrados SFBool initializeOnly; user or default input for onlyIntrados parameter
// archFilled SFBool initializeOnly; user or default input for archFilled parameter
// archHalfFilled SFBool initializeOnly; user or default input for archHalfFilled parameter
// lintel SFBool initializeOnly; user or default input for lintel parameter
// computedScale SFVec3f outputOnly; computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth
// pointOut MFVec3f outputOnly; send computed points to the Coordinate node
// indexOut MFInt32 outputOnly; send computed indices to the IndexedFaceSet node
              
// Author:      Michele Foti, Don Brutzman
// Created:     15 December 2014
// Revised:     6 February 2015
// Reference:   ArchModelingDiagrams.pdf

function initialize () {

    // INPUT:
    // Create the Arch with default parameters.
    // Two arrays follow: i[] creates the indices (IndexedFaceSet > coordIndex field); p[] creates the coordinate points (Coordinate > point field)
   
    var d,e,g,k,m,o,r,t; // index variables
    // var depth=0;
    
    var i = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 153, -1, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 144, -1, 136, 137, 0, 139, -1,  0, 139, 152, 153, -1,  152, 135, 155, 153, -1,  149, 31, 153, 155, -1,  149, 31, 144, 147, -1, 134, 147, 144, 145, -1,  145, 144, 62, 141, -1,  132, 133, 141, 62, -1, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 150, -1, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 143, -1, 130, 131, 63, 138, -1,   63, 138, 151, 150, -1,   150, 151, 129, 154, -1,  94, 150, 154, 148, -1,   148, 94, 143, 146, -1, 142, 128, 146, 143, -1, 140, 125, 143, 142, -1, 125, 126, 127, 140, -1, 0, 63, 64, 1, -1, 1, 64, 65, 2, -1, 2, 65, 66, 3, -1, 3, 66, 67, 4, -1, 4, 67, 68, 5, -1, 5, 68, 69, 6, -1, 6, 69, 70, 7, -1, 7, 70, 71, 8, -1, 8, 71, 72, 9, -1, 9, 72, 73, 10, -1, 10, 73, 74, 11, -1, 11, 74, 75, 12, -1, 12, 75, 76, 13, -1, 13, 76, 77, 14, -1, 14, 77, 78, 15, -1, 15, 78, 79, 16, -1, 16, 79, 80, 17, -1, 17, 80, 81, 18, -1, 18, 81, 82, 19, -1, 19, 82, 83, 20, -1, 20, 83, 84, 21, -1, 21, 84, 85, 22, -1, 22, 85, 86, 23, -1, 23, 86, 87, 24, -1, 24, 87, 88, 25, -1, 25, 88, 89, 26, -1, 26, 89, 90, 27, -1, 27, 90, 91, 28, -1, 28, 91, 92, 29, -1, 29, 92, 93, 30, -1, 30, 93, 94, 31, -1,  31, 94, 95, 32, -1, 32, 95, 96, 33, -1, 33, 96, 97, 34, -1, 34, 97, 98, 35, -1, 35, 98, 99, 36, -1, 36, 99, 100, 37, -1, 37, 100, 101, 38, -1, 38, 101, 102, 39, -1, 39, 102, 103, 40, -1, 40, 103, 104, 41, -1, 41, 104, 105, 42, -1, 42, 105, 106, 43, -1, 43, 106, 107, 44, -1, 44, 107, 108, 45, -1, 45, 108, 109, 46, -1, 46, 109, 110, 47, -1, 47, 110, 111, 48, -1, 48, 111, 112, 49, -1, 49, 112, 113, 50, -1, 50, 113, 114, 51, -1, 51, 114, 115, 52, -1, 52, 115, 116, 53, -1, 53, 116, 117, 54, -1, 54, 117, 118, 55, -1, 55, 118, 119, 56, -1, 56, 119, 120, 57, -1, 57, 120, 121, 58, -1, 58, 121, 122, 59, -1, 59, 122, 123, 60, -1, 60, 123, 124, 61, -1, 61, 124, 125, 62, -1, 0, 63, 131, 137, -1, 131, 130, 136, 137, -1,  130, 136, 139, 138, -1, 138, 139, 152, 151, -1, 151, 152, 135, 129, -1, 129, 135, 155, 154, -1, 148, 154, 155, 149, -1, 148, 149, 147, 146, -1, 146, 147, 134, 128, -1, 128, 134, 145, 142, -1, 140, 141, 145, 142, -1, 127, 133, 141, 140, -1, 127, 126, 132, 133, -1, 126, 132, 62, 125, -1, 63, 138, 139, 0, -1, 150, 151, 152, 153, -1, 150, 153, 31, 94, -1, 31, 94, 143, 144, -1, 142, 143, 144, 145, -1,  140, 125, 62, 141, -1, 0, 63, 150, 153, -1, 150, 153, 155, 154, -1, 31, 94, 148, 149, -1, 143, 144, 147, 146, -1, 62, 125, 143, 144, -1];
 	 
    var p = [2, 0, 0, 1.9974984355438178, 0.1, 0, 1.98997487421324, 0.2, 0, 1.977371993328519, 0.3, 0, 1.9595917942265423, 0.4, 0, 1.9364916731037084, 0.5, 0, 1.9078784028338912, 0.6, 0, 1.8734993995195193, 0.7, 0, 1.833030277982336, 0.8, 0, 1.786057109949175, 0.9, 0, 1.7320508075688775, 1, 0, 1.6703293088490067, 1.1, 0, 1.60, 1.2, 0, 1.5198684153570664, 1.3, 0, 1.42828568570857, 1.4, 0, 1.3228756555322953, 1.5, 0, 1.20, 1.6, 0, 1.0535653752852738, 1.7, 0, 0.9020947843768965, 1.785, 0, 0.7599342076785332, 1.85, 0, 0.6244997998398398, 1.9, 0, 0.5425633603552677, 1.925, 0, 0.4444097208657794, 1.95, 0, 0.36181625170796194, 1.967, 0, 0.2821347195933173, 1.98, 0, 0.19974984355438343,  1.99, 0, 0.16718552568927703,  1.993, 0, 0.14133294025102578, 1.995, 0, 0.10950342460398415, 1.997, 0, 0.08942035562443252, 1.998, 0, 0.06323764701505419, 1.999, 0, 0, 2, 0, -0.06323764701505419, 1.999, 0, -0.08942035562443252, 1.998, 0, -0.10950342460398415, 1.997, 0, -0.14133294025102578, 1.995, 0, -0.16718552568927703, 1.993, 0, -0.19974984355438343, 1.99, 0, -0.2821347195933173, 1.98, 0, -0.36181625170796194,  1.967, 0, -0.4444097208657794, 1.95, 0, -0.5425633603552677, 1.925, 0, -0.6244997998398398, 1.9, 0, -0.7599342076785332, 1.85, 0, -0.9020947843768965, 1.785, 0, -1.0535653752852738, 1.7, 0, -1.20, 1.6, 0, -1.3228756555322953, 1.5, 0, -1.42828568570857, 1.4, 0, -1.5198684153570664, 1.3, 0, -1.60, 1.2, 0, -1.6703293088490067, 1.1, 0, -1.7320508075688775, 1, 0, -1.786057109949175, 0.9, 0, -1.833030277982336, 0.8, 0, -1.8734993995195193, 0.7, 0, -1.9078784028338912, 0.6, 0, -1.9364916731037084, 0.5, 0, -1.9595917942265423, 0.4, 0, -1.977371993328519, 0.3, 0, -1.98997487421324, 0.2, 0, -1.9974984355438178, 0.1, 0, -2, 0, 0, 2, 0, 3, 1.9974984355438178, 0.1, 3, 1.98997487421324, 0.2, 3, 1.977371993328519, 0.3, 3, 1.9595917942265423, 0.4, 3, 1.9364916731037084, 0.5, 3, 1.9078784028338912, 0.6, 3, 1.8734993995195193, 0.7, 3, 1.833030277982336, 0.8, 3, 1.786057109949175, 0.9, 3, 1.7320508075688775, 1, 3, 1.6703293088490067, 1.1, 3, 1.60, 1.2, 3, 1.5198684153570664, 1.3, 3, 1.42828568570857, 1.4, 3, 1.3228756555322953, 1.5, 3, 1.20, 1.6, 3, 1.0535653752852738, 1.7, 3, 0.9020947843768965, 1.785, 3,	0.7599342076785332, 1.85, 3, 0.6244997998398398, 1.9, 3, 0.5425633603552677, 1.925, 3, 0.4444097208657794, 1.95, 3, 0.36181625170796194, 1.967, 3, 0.2821347195933173, 1.98, 3, 0.19974984355438343,  1.99, 3, 0.16718552568927703,  1.993, 3, 0.14133294025102578, 1.995, 3, 0.10950342460398415, 1.997, 3, 0.08942035562443252, 1.998, 3, 0.06323764701505419, 1.999, 3, 0, 2, 3, -0.06323764701505419, 1.999, 3, -0.08942035562443252, 1.998, 3, -0.10950342460398415, 1.997, 3, -0.14133294025102578, 1.995, 3, -0.16718552568927703, 1.993, 3, -0.19974984355438343, 1.99, 3, -0.2821347195933173, 1.98, 3, -0.36181625170796194,  1.967, 3, -0.4444097208657794, 1.95, 3, -0.5425633603552677, 1.925, 3, -0.6244997998398398, 1.9, 3, -0.7599342076785332, 1.85, 3, -0.9020947843768965, 1.785, 3, -1.0535653752852738, 1.7, 3, -1.20, 1.6, 3, -1.3228756555322953, 1.5, 3, -1.42828568570857, 1.4, 3, -1.5198684153570664, 1.3, 3, -1.60, 1.2, 3, -1.6703293088490067, 1.1, 3, -1.7320508075688775, 1, 3, -1.786057109949175, 0.9, 3, -1.833030277982336, 0.8, 3, -1.8734993995195193, 0.7, 3, -1.9078784028338912, 0.6, 3, -1.9364916731037084, 0.5, 3, -1.9595917942265423, 0.4, 3, -1.977371993328519, 0.3, 3, -1.98997487421324, 0.2, 3, -1.9974984355438178, 0.1, 3, -2, 0, 3, -2, -1, 3, -2.5, -1, 3, -2.5, 2.5, 3, 2.5, 2.5, 3, 2.5, -1, 3, 2, -1, 3, -2, -1, 0, -2.5, -1, 0, -2.5, 2.5, 0, 2.5, 2.5, 0, 2.5, -1, 0, 2, -1, 0, 2.5, 0, 3, 2.5, 0, 0, -2.5, 0, 3, -2.5, 0, 0, -2.5, 2, 3, -2, 2, 3, -2, 2, 0, -2.5, 2, 0, -2, 2.5, 3, -2, 2.5, 0, 0, 2.5, 3, 0, 2.5, 0, 2, 2, 3, 2.5, 2, 3, 2.5, 2, 0, 2, 2, 0, 2, 2.5, 3, 2, 2.5, 0, 0, 0, 0, 0, 0, 3]; 

    var a = 189; 
    
    // End INPUT


    // ENGINE:
    // Modify arch parameters reading the user inputs. 
    // There is an if block for each arch parameter: depth, topAbutmentHeight, pierWidth, pierHeight, archHalf (with 
    // archHalfExtensionWidth inside it), archFilled, archHalfFilled, lintel. clearSpanWidth and riseHeight if blocks 
    // are psitioned at end of script (ENGINE 2nd PART). 
    // p[] refers to points modified, i[] refers to indices modified.   

    if (depth != 3){
    
	for (d = 0; d <69; d++) {                        
            for (e = 0; e <3; e++) {       
                if (e === 2){
		    p[a] = depth;
 		} 
   		a++;
            }  
	} 
  	p[416] = depth; p[422] = depth;  p[428] = depth;  p[431] = depth;  p[440] = depth; p[446] = depth; p[452] = depth; p[455] = depth;  p[464] = depth; p[473] = depth;                       
    }


    // the following formula passes topAbutmentHeight input and  maintains it, because it would be affected by scale/riseHeight  
    if (topAbutmentHeight != 0.5){        
  		
  	p[385] = ((topAbutmentHeight + riseHeight)/(riseHeight/2)); p[388] = ((topAbutmentHeight + riseHeight)/(riseHeight/2)); p[403] = ((topAbutmentHeight + riseHeight)/(riseHeight/2));  p[406] = ((topAbutmentHeight + riseHeight)/(riseHeight/2)); p[439] = ((topAbutmentHeight + riseHeight)/(riseHeight/2)); p[442] = ((topAbutmentHeight + riseHeight)/(riseHeight/2));   p[445] = ((topAbutmentHeight + riseHeight)/(riseHeight/2)); p[448] = ((topAbutmentHeight + riseHeight)/(riseHeight/2));    p[463] = ((topAbutmentHeight + riseHeight)/(riseHeight/2)); p[466] = ((topAbutmentHeight + riseHeight)/(riseHeight/2));                         
    } 


    // the following formula passes pierWidth input and  maintains it, because it would be affected by scale/clearSpanWidth  
    if (pierWidth != 0.5){    
  		
  	p[381] = - ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4)); p[384] = - ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4));  p[387] = ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4));   p[390] = ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4));  p[399] = - ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4));  p[402] = - ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4)); p[405] = ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4)); p[408] = ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4));     p[414] = ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4));  p[417] = ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4)); p[420] = - ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4)); p[423] = - ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4));         p[426] = - ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4));  p[435] = - ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4)); p[453] = ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4)); p[456] = ((pierWidth + clearSpanWidth/2)/(clearSpanWidth/4));                     
    }
 
    // the following formula passes pierHeight input and  maintains it, because it would be affected by scale/riseHeight  
    if (pierHeight != 1){         
  		
  	p[379] = - (pierHeight/(riseHeight/2)); p[382] = - (pierHeight/(riseHeight/2));  p[391] = - (pierHeight/(riseHeight/2));  p[394] = - (pierHeight/(riseHeight/2));  p[397] = - (pierHeight/(riseHeight/2)); p[400] = - (pierHeight/(riseHeight/2)); p[409] = - (pierHeight/(riseHeight/2)); p[412] = - (pierHeight/(riseHeight/2));                            
    }


    if (archHalf === true){  
    
        for (k = 0; k < 33; k++) {       
            i[k] = 0;
	}
        
	for (k = 68; k <87; k++) {       
            i[k] = null;
	}

	for (k = 108; k <141; k++) {        
            i[k] = null;
	}

	for (k = 176; k <195; k++) {        
            i[k] = null;
	}

	for (k = 216; k <370; k++) {          
            i[k] = null;
	}

	for (k = 526; k <560; k++) {       
            i[k] = null;
	}

	for (k = 596; k <610; k++) {       
            i[k] = null;
	}

	for (k = 626; k <635; k++) {        
            i[k] = null;
	}
        
        // see reference for further information about archHalfExtensionWidth
	if (archHalfExtensionWidth != 0){   

            p[444] = archHalfExtensionWidth; p[447] = archHalfExtensionWidth; 
            p[468] = archHalfExtensionWidth; p[469] = riseHeight/(riseHeight/2); p[470] = 0; p[471] = archHalfExtensionWidth; p[472] = riseHeight/(riseHeight/2); p[473] = depth;  
            i[636] = 156; i[637] = 157; i[638] = 148; i[639] = 149; i[640] = -1 ;
            i[89] = 156; i[197] = 157;
            i[68] = 31; i[69] = 94; i[70] = 157; i[71] = 156; i[72] = -1;
	}
    }


    if (onlyIntrados === true){     

        for (m = 0; m <215; m++) {       
            i[m] = null;
	}

	for ( m = 526; m <650; m++) {         
            i[m] = null;
	}
    }


    if (archFilled === true){     

	for (g = 78; g <107; g++) {       
            i[g] = null;
	}
	i[32] = 156; i[66] = 156;   i[140] = 157; i[174] = 157;

	i[68] = 0; i[69] = 156; i[70] = 157; i[71] = 63; i[72] = -1;      i[73] = 62; i[74] = 156; i[75] = 157; i[76] = 125; i[77] = -1;

	for ( g = 176; g <215; g++) {       
            i[g] = null;
	}

	for ( g = 526; g <650; g++) {         
            i[g] = null;
	}
    }


    if (archHalfFilled === true){     

	for (t = 0; t <33; t++) {       
            i[t] = null;
	}

	for (t = 78; t <141; t++) {       
            i[t] = null;
	}

	i[66] = 156;    i[174] = 157;

	i[68] = 31; i[69] = 156; i[70] = 157; i[71] = 94; i[72] = -1;      i[73] = 62; i[74] = 156; i[75] = 157; i[76] = 125; i[77] = -1;

	for ( t = 176; t <370; t++) {       
            i[t] = null;
	}

	for ( t = 526; t <650; t++) {         
            i[t] = null;
	}
    }


    if (lintel === true){  
   
	for (r = 0; r <67; r++) {       
            i[r] = 0;
	}

	for (r = 73; r <77; r++) {       
            i[r] = 0;
	}

	for (r = 98; r <102; r++) {       
            i[r] = 0;
	}
		
	for (r = 108; r <175; r++) {       
            i[r] = 0;
	}

	for (r = 181; r <185; r++) {        
            i[r] = 0;
		}

	for (r = 206; r <210; r++) {        
            i[r] = 0;
	}

	for (r = 216; r <525; r++) {          
            i[r] = 0;
	}

	for (r = 541; r <545; r++) {       
            i[r] = 0;
	}

	for (r = 576; r <580; r++) {       
            i[r] = 0;
	}

	for (r = 626; r <630; r++) {       
            i[r] = 0;
	}

	for (r = 646; r <650; r++) {       
            i[r] = 0;
	}

 	p[427] = 0; p[430] = 0;  p[433] = 0;  p[436] = 0;  p[451] = 0; p[454] = 0; p[457] = 0; p[460] = 0; p[94] = 0; p[283] = 0;                           

	p[385] = topAbutmentHeight; p[388] = topAbutmentHeight;  p[403] = topAbutmentHeight;  p[406] = topAbutmentHeight;  p[439] = topAbutmentHeight; p[442] = topAbutmentHeight; p[445] = topAbutmentHeight; p[448] = topAbutmentHeight; p[463] = topAbutmentHeight; p[466] = topAbutmentHeight;                               
  
    }
    
    // End ENGINE
    
    
    // OUTPUT:
    // Send out of script all inices and all points that draw the Arch. 
    // Indices and points come from the two input arrays (i[] and p[]) and some of them has been modified inside the ENGINE, reading the user inputs. 
	       
    indexOut[0] = i[0]; indexOut[1] = i[1]; indexOut[2] = i[2]; indexOut[3] = i[3]; indexOut[4] = i[4]; indexOut[5] = i[5]; indexOut[6] = i[6]; indexOut[7] = i[7]; indexOut[8] = i[8]; indexOut[9] = i[9]; indexOut[10] = i[10]; indexOut[11] = i[11]; indexOut[12] = i[12]; indexOut[13] = i[13]; indexOut[14] = i[14]; indexOut[15] = i[15]; indexOut[16] = i[16]; indexOut[17] = i[17]; indexOut[18] = i[18]; indexOut[19] = i[19]; indexOut[20] = i[20]; indexOut[21] = i[21]; indexOut[22] = i[22]; indexOut[23] = i[23]; indexOut[24] = i[24]; indexOut[25] = i[25]; indexOut[26] = i[26]; indexOut[27] = i[27]; indexOut[28] = i[28]; indexOut[29] = i[29]; indexOut[30] = i[30]; indexOut[31] = i[31]; indexOut[32] = i[32]; indexOut[33] = i[33]; indexOut[34] = i[34]; indexOut[35] = i[35]; indexOut[36] = i[36]; indexOut[37] = i[37]; indexOut[38] = i[38]; indexOut[39] = i[39]; indexOut[40] = i[40]; indexOut[41] = i[41]; indexOut[42] = i[42]; indexOut[43] = i[43]; indexOut[44] = i[44]; indexOut[45] = i[45]; indexOut[46] = i[46]; indexOut[47] = i[47]; indexOut[48] = i[48]; indexOut[49] = i[49]; indexOut[50] = i[50]; indexOut[51] = i[51]; indexOut[52] = i[52]; indexOut[53] = i[53]; indexOut[54] = i[54]; indexOut[55] = i[55]; indexOut[56] = i[56]; indexOut[57] = i[57]; indexOut[58] = i[58]; indexOut[59] = i[59]; indexOut[60] = i[60]; indexOut[61] = i[61]; indexOut[62] = i[62]; indexOut[63] = i[63]; indexOut[64] = i[64]; indexOut[65] = i[65]; indexOut[66] = i[66]; indexOut[67] = i[67]; indexOut[68] = i[68]; indexOut[69] = i[69]; indexOut[70] = i[70]; indexOut[71] = i[71]; indexOut[72] = i[72]; indexOut[73] = i[73]; indexOut[74] = i[74]; indexOut[75] = i[75]; indexOut[76] = i[76]; indexOut[77] = i[77]; indexOut[78] = i[78]; indexOut[79] = i[79]; indexOut[80] = i[80]; indexOut[81] = i[81]; indexOut[82] = i[82]; indexOut[83] = i[83]; indexOut[84] = i[84]; indexOut[85] = i[85]; indexOut[86] = i[86]; indexOut[87] = i[87]; indexOut[88] = i[88]; indexOut[89] = i[89]; indexOut[90] = i[90]; indexOut[91] = i[91]; indexOut[92] = i[92]; indexOut[93] = i[93]; indexOut[94] = i[94]; indexOut[95] = i[95]; indexOut[96] = i[96]; indexOut[97] = i[97]; indexOut[98] = i[98]; indexOut[99] = i[99]; indexOut[100] = i[100]; indexOut[101] = i[101]; indexOut[102] = i[102]; indexOut[103] = i[103]; indexOut[104] = i[104]; indexOut[105] = i[105]; indexOut[106] = i[106]; indexOut[107] = i[107]; indexOut[108] = i[108]; indexOut[109] = i[109]; indexOut[110] = i[110]; indexOut[111] = i[111]; indexOut[112] = i[112]; indexOut[113] = i[113]; indexOut[114] = i[114]; indexOut[115] = i[115]; indexOut[116] = i[116]; indexOut[117] = i[117]; indexOut[118] = i[118]; indexOut[119] = i[119]; indexOut[120] = i[120]; indexOut[121] = i[121]; indexOut[122] = i[122]; indexOut[123] = i[123]; indexOut[124] = i[124]; indexOut[125] = i[125]; indexOut[126] = i[126]; indexOut[127] = i[127]; indexOut[128] = i[128]; indexOut[129] = i[129]; indexOut[130] = i[130]; indexOut[131] = i[131]; indexOut[132] = i[132]; indexOut[133] = i[133]; indexOut[134] = i[134]; indexOut[135] = i[135]; indexOut[136] = i[136]; indexOut[137] = i[137]; indexOut[138] = i[138]; indexOut[139] = i[139]; indexOut[140] = i[140]; indexOut[141] = i[141]; indexOut[142] = i[142]; indexOut[143] = i[143]; indexOut[144] = i[144]; indexOut[145] = i[145]; indexOut[146] = i[146]; indexOut[147] = i[147]; indexOut[148] = i[148]; indexOut[149] = i[149]; indexOut[150] = i[150]; indexOut[151] = i[151]; indexOut[152] = i[152]; indexOut[153] = i[153]; indexOut[154] = i[154]; indexOut[155] = i[155]; indexOut[156] = i[156]; indexOut[157] = i[157]; indexOut[158] = i[158]; indexOut[159] = i[159]; indexOut[160] = i[160]; indexOut[161] = i[161]; indexOut[162] = i[162]; indexOut[163] = i[163]; indexOut[164] = i[164]; indexOut[165] = i[165]; indexOut[166] = i[166]; indexOut[167] = i[167]; indexOut[168] = i[168]; indexOut[169] = i[169]; indexOut[170] = i[170]; indexOut[171] = i[171]; indexOut[172] = i[172]; indexOut[173] = i[173]; indexOut[174] = i[174]; indexOut[175] = i[175]; indexOut[176] = i[176]; indexOut[177] = i[177]; indexOut[178] = i[178]; indexOut[179] = i[179]; indexOut[180] = i[180]; indexOut[181] = i[181]; indexOut[182] = i[182]; indexOut[183] = i[183]; indexOut[184] = i[184]; indexOut[185] = i[185]; indexOut[186] = i[186]; indexOut[187] = i[187]; indexOut[188] = i[188]; indexOut[189] = i[189]; indexOut[190] = i[190]; indexOut[191] = i[191]; indexOut[192] = i[192]; indexOut[193] = i[193]; indexOut[194] = i[194]; indexOut[195] = i[195]; indexOut[196] = i[196]; indexOut[197] = i[197]; indexOut[198] = i[198]; indexOut[199] = i[199]; indexOut[200] = i[200]; indexOut[201] = i[201]; indexOut[202] = i[202]; indexOut[203] = i[203]; indexOut[204] = i[204]; indexOut[205] = i[205]; indexOut[206] = i[206]; indexOut[207] = i[207]; indexOut[208] = i[208]; indexOut[209] = i[209]; indexOut[210] = i[210]; indexOut[211] = i[211]; indexOut[212] = i[212]; indexOut[213] = i[213]; indexOut[214] = i[214]; indexOut[215] = i[215]; indexOut[216] = i[216]; indexOut[217] = i[217]; indexOut[218] = i[218]; indexOut[219] = i[219]; indexOut[220] = i[220]; indexOut[221] = i[221]; indexOut[222] = i[222]; indexOut[223] = i[223]; indexOut[224] = i[224]; indexOut[225] = i[225]; indexOut[226] = i[226]; indexOut[227] = i[227]; indexOut[228] = i[228]; indexOut[229] = i[229]; indexOut[230] = i[230]; indexOut[231] = i[231]; indexOut[232] = i[232]; indexOut[233] = i[233]; indexOut[234] = i[234]; indexOut[235] = i[235]; indexOut[236] = i[236]; indexOut[237] = i[237]; indexOut[238] = i[238]; indexOut[239] = i[239]; indexOut[240] = i[240]; indexOut[241] = i[241]; indexOut[242] = i[242]; indexOut[243] = i[243]; indexOut[244] = i[244]; indexOut[245] = i[245]; indexOut[246] = i[246]; indexOut[247] = i[247]; indexOut[248] = i[248]; indexOut[249] = i[249]; indexOut[250] = i[250]; indexOut[251] = i[251]; indexOut[252] = i[252]; indexOut[253] = i[253]; indexOut[254] = i[254]; indexOut[255] = i[255]; indexOut[256] = i[256]; indexOut[257] = i[257]; indexOut[258] = i[258]; indexOut[259] = i[259]; indexOut[260] = i[260]; indexOut[261] = i[261]; indexOut[262] = i[262]; indexOut[263] = i[263]; indexOut[264] = i[264]; indexOut[265] = i[265]; indexOut[266] = i[266]; indexOut[267] = i[267]; indexOut[268] = i[268]; indexOut[269] = i[269]; indexOut[270] = i[270]; indexOut[271] = i[271]; indexOut[272] = i[272]; indexOut[273] = i[273]; indexOut[274] = i[274]; indexOut[275] = i[275]; indexOut[276] = i[276]; indexOut[277] = i[277]; indexOut[278] = i[278]; indexOut[279] = i[279]; indexOut[280] = i[280]; indexOut[281] = i[281]; indexOut[282] = i[282]; indexOut[283] = i[283]; indexOut[284] = i[284]; indexOut[285] = i[285]; indexOut[286] = i[286]; indexOut[287] = i[287]; indexOut[288] = i[288]; indexOut[289] = i[289]; indexOut[290] = i[290]; indexOut[291] = i[291]; indexOut[292] = i[292]; indexOut[293] = i[293]; indexOut[294] = i[294]; indexOut[295] = i[295]; indexOut[296] = i[296]; indexOut[297] = i[297]; indexOut[298] = i[298]; indexOut[299] = i[299]; indexOut[300] = i[300]; indexOut[301] = i[301]; indexOut[302] = i[302]; indexOut[303] = i[303]; indexOut[304] = i[304]; indexOut[305] = i[305]; indexOut[306] = i[306]; indexOut[307] = i[307]; indexOut[308] = i[308]; indexOut[309] = i[309]; indexOut[310] = i[310]; indexOut[311] = i[311]; indexOut[312] = i[312]; indexOut[313] = i[313]; indexOut[314] = i[314]; indexOut[315] = i[315]; indexOut[316] = i[316]; indexOut[317] = i[317]; indexOut[318] = i[318]; indexOut[319] = i[319]; indexOut[320] = i[320]; indexOut[321] = i[321]; indexOut[322] = i[322]; indexOut[323] = i[323]; indexOut[324] = i[324]; indexOut[325] = i[325]; indexOut[326] = i[326]; indexOut[327] = i[327]; indexOut[328] = i[328]; indexOut[329] = i[329]; indexOut[330] = i[330]; indexOut[331] = i[331]; indexOut[332] = i[332]; indexOut[333] = i[333]; indexOut[334] = i[334]; indexOut[335] = i[335]; indexOut[336] = i[336]; indexOut[337] = i[337]; indexOut[338] = i[338]; indexOut[339] = i[339]; indexOut[340] = i[340]; indexOut[341] = i[341]; indexOut[342] = i[342]; indexOut[343] = i[343]; indexOut[344] = i[344]; indexOut[345] = i[345]; indexOut[346] = i[346]; indexOut[347] = i[347]; indexOut[348] = i[348]; indexOut[349] = i[349]; indexOut[350] = i[350]; indexOut[351] = i[351]; indexOut[352] = i[352]; indexOut[353] = i[353]; indexOut[354] = i[354]; indexOut[355] = i[355]; indexOut[356] = i[356]; indexOut[357] = i[357]; indexOut[358] = i[358]; indexOut[359] = i[359]; indexOut[360] = i[360]; indexOut[361] = i[361]; indexOut[362] = i[362]; indexOut[363] = i[363]; indexOut[364] = i[364]; indexOut[365] = i[365]; indexOut[366] = i[366]; indexOut[367] = i[367]; indexOut[368] = i[368]; indexOut[369] = i[369]; indexOut[370] = i[370]; indexOut[371] = i[371]; indexOut[372] = i[372]; indexOut[373] = i[373]; indexOut[374] = i[374]; indexOut[375] = i[375]; indexOut[376] = i[376]; indexOut[377] = i[377]; indexOut[378] = i[378]; indexOut[379] = i[379]; indexOut[380] = i[380]; indexOut[381] = i[381]; indexOut[382] = i[382]; indexOut[383] = i[383]; indexOut[384] = i[384]; indexOut[385] = i[385]; indexOut[386] = i[386]; indexOut[387] = i[387]; indexOut[388] = i[388]; indexOut[389] = i[389]; indexOut[390] = i[390]; indexOut[391] = i[391]; indexOut[392] = i[392]; indexOut[393] = i[393]; indexOut[394] = i[394]; indexOut[395] = i[395]; indexOut[396] = i[396]; indexOut[397] = i[397]; indexOut[398] = i[398]; indexOut[399] = i[399]; indexOut[400] = i[400]; indexOut[401] = i[401]; indexOut[402] = i[402]; indexOut[403] = i[403]; indexOut[404] = i[404]; indexOut[405] = i[405]; indexOut[406] = i[406]; indexOut[407] = i[407]; indexOut[408] = i[408]; indexOut[409] = i[409]; indexOut[410] = i[410]; indexOut[411] = i[411]; indexOut[412] = i[412]; indexOut[413] = i[413]; indexOut[414] = i[414]; indexOut[415] = i[415]; indexOut[416] = i[416]; indexOut[417] = i[417]; indexOut[418] = i[418]; indexOut[419] = i[419]; indexOut[420] = i[420]; indexOut[421] = i[421]; indexOut[422] = i[422]; indexOut[423] = i[423]; indexOut[424] = i[424]; indexOut[425] = i[425]; indexOut[426] = i[426]; indexOut[427] = i[427]; indexOut[428] = i[428]; indexOut[429] = i[429]; indexOut[430] = i[430]; indexOut[431] = i[431]; indexOut[432] = i[432]; indexOut[433] = i[433]; indexOut[434] = i[434]; indexOut[435] = i[435]; indexOut[436] = i[436]; indexOut[437] = i[437]; indexOut[438] = i[438]; indexOut[439] = i[439]; indexOut[440] = i[440]; indexOut[441] = i[441]; indexOut[442] = i[442]; indexOut[443] = i[443]; indexOut[444] = i[444]; indexOut[445] = i[445]; indexOut[446] = i[446]; indexOut[447] = i[447]; indexOut[448] = i[448]; indexOut[449] = i[449]; indexOut[450] = i[450]; indexOut[451] = i[451]; indexOut[452] = i[452]; indexOut[453] = i[453]; indexOut[454] = i[454]; indexOut[455] = i[455]; indexOut[456] = i[456]; indexOut[457] = i[457]; indexOut[458] = i[458]; indexOut[459] = i[459]; indexOut[460] = i[460]; indexOut[461] = i[461]; indexOut[462] = i[462]; indexOut[463] = i[463]; indexOut[464] = i[464]; indexOut[465] = i[465]; indexOut[466] = i[466]; indexOut[467] = i[467]; indexOut[468] = i[468]; indexOut[469] = i[469]; indexOut[470] = i[470]; indexOut[471] = i[471]; indexOut[472] = i[472]; indexOut[473] = i[473]; indexOut[474] = i[474]; indexOut[475] = i[475]; indexOut[476] = i[476]; indexOut[477] = i[477]; indexOut[478] = i[478]; indexOut[479] = i[479]; indexOut[480] = i[480]; indexOut[481] = i[481]; indexOut[482] = i[482]; indexOut[483] = i[483]; indexOut[484] = i[484]; indexOut[485] = i[485]; indexOut[486] = i[486]; indexOut[487] = i[487]; indexOut[488] = i[488]; indexOut[489] = i[489]; indexOut[490] = i[490]; indexOut[491] = i[491]; indexOut[492] = i[492]; indexOut[493] = i[493]; indexOut[494] = i[494]; indexOut[495] = i[495]; indexOut[496] = i[496]; indexOut[497] = i[497]; indexOut[498] = i[498]; indexOut[499] = i[499]; indexOut[500] = i[500]; indexOut[501] = i[501]; indexOut[502] = i[502]; indexOut[503] = i[503]; indexOut[504] = i[504]; indexOut[505] = i[505]; indexOut[506] = i[506]; indexOut[507] = i[507]; indexOut[508] = i[508]; indexOut[509] = i[509]; indexOut[510] = i[510]; indexOut[511] = i[511]; indexOut[512] = i[512]; indexOut[513] = i[513]; indexOut[514] = i[514]; indexOut[515] = i[515]; indexOut[516] = i[516]; indexOut[517] = i[517]; indexOut[518] = i[518]; indexOut[519] = i[519]; indexOut[520] = i[520]; indexOut[521] = i[521]; indexOut[522] = i[522]; indexOut[523] = i[523]; indexOut[524] = i[524]; indexOut[525] = i[525]; indexOut[526] = i[526]; indexOut[527] = i[527]; indexOut[528] = i[528]; indexOut[529] = i[529]; indexOut[530] = i[530]; indexOut[531] = i[531]; indexOut[532] = i[532]; indexOut[533] = i[533]; indexOut[534] = i[534]; indexOut[535] = i[535]; indexOut[536] = i[536]; indexOut[537] = i[537]; indexOut[538] = i[538]; indexOut[539] = i[539]; indexOut[540] = i[540]; indexOut[541] = i[541]; indexOut[542] = i[542]; indexOut[543] = i[543]; indexOut[544] = i[544]; indexOut[545] = i[545]; indexOut[546] = i[546]; indexOut[547] = i[547]; indexOut[548] = i[548]; indexOut[549] = i[549]; indexOut[550] = i[550]; indexOut[551] = i[551]; indexOut[552] = i[552]; indexOut[553] = i[553]; indexOut[554] = i[554]; indexOut[555] = i[555]; indexOut[556] = i[556]; indexOut[557] = i[557]; indexOut[558] = i[558]; indexOut[559] = i[559]; indexOut[560] = i[560]; indexOut[561] = i[561]; indexOut[562] = i[562]; indexOut[563] = i[563]; indexOut[564] = i[564]; indexOut[565] = i[565]; indexOut[566] = i[566]; indexOut[567] = i[567]; indexOut[568] = i[568]; indexOut[569] = i[569]; indexOut[570] = i[570]; indexOut[571] = i[571]; indexOut[572] = i[572]; indexOut[573] = i[573]; indexOut[574] = i[574]; indexOut[575] = i[575]; indexOut[576] = i[576]; indexOut[577] = i[577]; indexOut[578] = i[578]; indexOut[579] = i[579]; indexOut[580] = i[580]; indexOut[581] = i[581]; indexOut[582] = i[582]; indexOut[583] = i[583]; indexOut[584] = i[584]; indexOut[585] = i[585]; indexOut[586] = i[586]; indexOut[587] = i[587]; indexOut[588] = i[588]; indexOut[589] = i[589]; indexOut[590] = i[590]; indexOut[591] = i[591]; indexOut[592] = i[592]; indexOut[593] = i[593]; indexOut[594] = i[594]; indexOut[595] = i[595]; indexOut[596] = i[596]; indexOut[597] = i[597]; indexOut[598] = i[598]; indexOut[599] = i[599]; indexOut[600] = i[600]; indexOut[601] = i[601]; indexOut[602] = i[602]; indexOut[603] = i[603]; indexOut[604] = i[604]; indexOut[605] = i[605]; indexOut[606] = i[606]; indexOut[607] = i[607]; indexOut[608] = i[608]; indexOut[609] = i[609]; indexOut[610] = i[610]; indexOut[611] = i[611]; indexOut[612] = i[612]; indexOut[613] = i[613]; indexOut[614] = i[614]; indexOut[615] = i[615]; indexOut[616] = i[616]; indexOut[617] = i[617]; indexOut[618] = i[618]; indexOut[619] = i[619]; indexOut[620] = i[620]; indexOut[621] = i[621]; indexOut[622] = i[622]; indexOut[623] = i[623]; indexOut[624] = i[624]; indexOut[625] = i[625]; indexOut[626] = i[626]; indexOut[627] = i[627]; indexOut[628] = i[628]; indexOut[629] = i[629]; indexOut[630] = i[630]; indexOut[631] = i[631]; indexOut[632] = i[632]; indexOut[633] = i[633]; indexOut[634] = i[634]; indexOut[635] = i[635]; indexOut[636] = i[636]; indexOut[637] = i[637]; indexOut[638] = i[638]; indexOut[639] = i[639]; indexOut[640] = i[640]; indexOut[641] = i[641]; indexOut[642] = i[642]; indexOut[643] = i[643]; indexOut[644] = i[644]; indexOut[645] = i[645]; indexOut[646] = i[646]; indexOut[647] = i[647]; indexOut[648] = i[648]; indexOut[649] = i[649]; indexOut[650] = i[650]; indexOut[651] = i[651]; indexOut[652] = i[652]; indexOut[653] = i[653]; indexOut[654] = i[654]; indexOut[655] = i[655]; 
 	   
    pointOut[0] = new SFVec3f(p[0], p[1], p[2]); pointOut[1] = new SFVec3f(p[3], p[4], p[5]); pointOut[2] = new SFVec3f(p[6], p[7], p[8]); pointOut[3] = new SFVec3f(p[9], p[10], p[11]); pointOut[4] = new SFVec3f(p[12], p[13], p[14]); pointOut[5] = new SFVec3f(p[15], p[16], p[17]); pointOut[6] = new SFVec3f(p[18], p[19], p[20]); pointOut[7] = new SFVec3f(p[21], p[22], p[23]); pointOut[8] = new SFVec3f(p[24], p[25], p[26]); pointOut[9] = new SFVec3f(p[27], p[28], p[29]); pointOut[10] = new SFVec3f(p[30], p[31], p[32]); pointOut[11] = new SFVec3f(p[33], p[34], p[35]); pointOut[12] = new SFVec3f(p[36], p[37], p[38]); pointOut[13] = new SFVec3f(p[39], p[40], p[41]); pointOut[14] = new SFVec3f(p[42], p[43], p[44]); pointOut[15] = new SFVec3f(p[45], p[46], p[47]); pointOut[16] = new SFVec3f(p[48], p[49], p[50]); pointOut[17] = new SFVec3f(p[51], p[52], p[53]); pointOut[18] = new SFVec3f(p[54], p[55], p[56]); pointOut[19] = new SFVec3f(p[57], p[58], p[59]); pointOut[20] = new SFVec3f(p[60], p[61], p[62]); pointOut[21] = new SFVec3f(p[63], p[64], p[65]); pointOut[22] = new SFVec3f(p[66], p[67], p[68]); pointOut[23] = new SFVec3f(p[69], p[70], p[71]); pointOut[24] = new SFVec3f(p[72], p[73], p[74]); pointOut[25] = new SFVec3f(p[75], p[76], p[77]); pointOut[26] = new SFVec3f(p[78], p[79], p[80]); pointOut[27] = new SFVec3f(p[81], p[82], p[83]); pointOut[28] = new SFVec3f(p[84], p[85], p[86]); pointOut[29] = new SFVec3f(p[87], p[88], p[89]); pointOut[30] = new SFVec3f(p[90], p[91], p[92]); pointOut[31] = new SFVec3f(p[93], p[94], p[95]); pointOut[32] = new SFVec3f(p[96], p[97], p[98]); pointOut[33] = new SFVec3f(p[99], p[100], p[101]); pointOut[34] = new SFVec3f(p[102], p[103], p[104]); pointOut[35] = new SFVec3f(p[105], p[106], p[107]); pointOut[36] = new SFVec3f(p[108], p[109], p[110]); pointOut[37] = new SFVec3f(p[111], p[112], p[113]); pointOut[38] = new SFVec3f(p[114], p[115], p[116]); pointOut[39] = new SFVec3f(p[117], p[118], p[119]); pointOut[40] = new SFVec3f(p[120], p[121], p[122]); pointOut[41] = new SFVec3f(p[123], p[124], p[125]); pointOut[42] = new SFVec3f(p[126], p[127], p[128]); pointOut[43] = new SFVec3f(p[129], p[130], p[131]); pointOut[44] = new SFVec3f(p[132], p[133], p[134]); pointOut[45] = new SFVec3f(p[135], p[136], p[137]); pointOut[46] = new SFVec3f(p[138], p[139], p[140]); pointOut[47] = new SFVec3f(p[141], p[142], p[143]); pointOut[48] = new SFVec3f(p[144], p[145], p[146]); pointOut[49] = new SFVec3f(p[147], p[148], p[149]); pointOut[50] = new SFVec3f(p[150], p[151], p[152]); pointOut[51] = new SFVec3f(p[153], p[154], p[155]); pointOut[52] = new SFVec3f(p[156], p[157], p[158]); pointOut[53] = new SFVec3f(p[159], p[160], p[161]); pointOut[54] = new SFVec3f(p[162], p[163], p[164]); pointOut[55] = new SFVec3f(p[165], p[166], p[167]); pointOut[56] = new SFVec3f(p[168], p[169], p[170]); pointOut[57] = new SFVec3f(p[171], p[172], p[173]); pointOut[58] = new SFVec3f(p[174], p[175], p[176]); pointOut[59] = new SFVec3f(p[177], p[178], p[179]); pointOut[60] = new SFVec3f(p[180], p[181], p[182]); pointOut[61] = new SFVec3f(p[183], p[184], p[185]); pointOut[62] = new SFVec3f(p[186], p[187], p[188]); pointOut[63] = new SFVec3f(p[189], p[190], p[191]); pointOut[64] = new SFVec3f(p[192], p[193], p[194]); pointOut[65] = new SFVec3f(p[195], p[196], p[197]); pointOut[66] = new SFVec3f(p[198], p[199], p[200]); pointOut[67] = new SFVec3f(p[201], p[202], p[203]); pointOut[68] = new SFVec3f(p[204], p[205], p[206]); pointOut[69] = new SFVec3f(p[207], p[208], p[209]); pointOut[70] = new SFVec3f(p[210], p[211], p[212]); pointOut[71] = new SFVec3f(p[213], p[214], p[215]); pointOut[72] = new SFVec3f(p[216], p[217], p[218]); pointOut[73] = new SFVec3f(p[219], p[220], p[221]); pointOut[74] = new SFVec3f(p[222], p[223], p[224]); pointOut[75] = new SFVec3f(p[225], p[226], p[227]); pointOut[76] = new SFVec3f(p[228], p[229], p[230]); pointOut[77] = new SFVec3f(p[231], p[232], p[233]); pointOut[78] = new SFVec3f(p[234], p[235], p[236]); pointOut[79] = new SFVec3f(p[237], p[238], p[239]); pointOut[80] = new SFVec3f(p[240], p[241], p[242]);pointOut[81] = new SFVec3f(p[243], p[244], p[245]); pointOut[82] = new SFVec3f(p[246], p[247], p[248]); pointOut[83] = new SFVec3f(p[249], p[250], p[251]); pointOut[84] = new SFVec3f(p[252], p[253], p[254]); pointOut[85] = new SFVec3f(p[255], p[256], p[257]); pointOut[86] = new SFVec3f(p[258], p[259], p[260]); pointOut[87] = new SFVec3f(p[261], p[262], p[263]); pointOut[88] = new SFVec3f(p[264], p[265], p[266]); pointOut[89] = new SFVec3f(p[267], p[268], p[269]); pointOut[90] = new SFVec3f(p[270], p[271], p[272]); pointOut[91] = new SFVec3f(p[273], p[274], p[275]); pointOut[92] = new SFVec3f(p[276], p[277], p[278]); pointOut[93] = new SFVec3f(p[279], p[280], p[281]); pointOut[94] = new SFVec3f(p[282], p[283], p[284]); pointOut[95] = new SFVec3f(p[285], p[286], p[287]); pointOut[96] = new SFVec3f(p[288], p[289], p[290]); pointOut[97] = new SFVec3f(p[291], p[292], p[293]);pointOut[98] = new SFVec3f(p[294], p[295], p[296]); pointOut[99] = new SFVec3f(p[297], p[298], p[299]); pointOut[100] = new SFVec3f(p[300], p[301], p[302]); pointOut[101] = new SFVec3f(p[303], p[304], p[305]); pointOut[102] = new SFVec3f(p[306], p[307], p[308]); pointOut[103] = new SFVec3f(p[309], p[310], p[311]); pointOut[104] = new SFVec3f(p[312], p[313], p[314]); pointOut[105] = new SFVec3f(p[315], p[316], p[317]); pointOut[106] = new SFVec3f(p[318], p[319], p[320]); pointOut[107] = new SFVec3f(p[321], p[322], p[323]); pointOut[108] = new SFVec3f(p[324], p[325], p[326]); pointOut[109] = new SFVec3f(p[327], p[328], p[329]); pointOut[110] = new SFVec3f(p[330], p[331], p[332]); pointOut[111] = new SFVec3f(p[333], p[334], p[335]); pointOut[112] = new SFVec3f(p[336], p[337], p[338]); pointOut[113] = new SFVec3f(p[339], p[340], p[341]); pointOut[114] = new SFVec3f(p[342], p[343], p[344]); pointOut[115] = new SFVec3f(p[345], p[346], p[347]); pointOut[116] = new SFVec3f(p[348], p[349], p[350]); pointOut[117] = new SFVec3f(p[351], p[352], p[353]); pointOut[118] = new SFVec3f(p[354], p[355], p[356]); pointOut[119] = new SFVec3f(p[357], p[358], p[359]); pointOut[120] = new SFVec3f(p[360], p[361], p[362]); pointOut[121] = new SFVec3f(p[363], p[364], p[365]); pointOut[122] = new SFVec3f(p[366], p[367], p[368]); pointOut[123] = new SFVec3f(p[369], p[370], p[371]); pointOut[124] = new SFVec3f(p[372], p[373], p[374]); pointOut[125] = new SFVec3f(p[375], p[376], p[377]); pointOut[126] = new SFVec3f(p[378], p[379], p[380]); pointOut[127] = new SFVec3f(p[381], p[382], p[383]); pointOut[128] = new SFVec3f(p[384], p[385], p[386]); pointOut[129] = new SFVec3f(p[387], p[388], p[389]); pointOut[130] = new SFVec3f(p[390], p[391], p[392]); pointOut[131] = new SFVec3f(p[393], p[394], p[395]); pointOut[132] = new SFVec3f(p[396], p[397], p[398]); pointOut[133] = new SFVec3f(p[399], p[400], p[401]); pointOut[134] = new SFVec3f(p[402], p[403], p[404]); pointOut[135] = new SFVec3f(p[405], p[406], p[407]); pointOut[136] = new SFVec3f(p[408], p[409], p[410]); pointOut[137] = new SFVec3f(p[411], p[412], p[413]); pointOut[138] = new SFVec3f(p[414], p[415], p[416]); pointOut[139] = new SFVec3f(p[417], p[418], p[419]); pointOut[140] = new SFVec3f(p[420], p[421], p[422]); pointOut[141] = new SFVec3f(p[423], p[424], p[425]); pointOut[142] = new SFVec3f(p[426], p[427], p[428]); pointOut[143] = new SFVec3f(p[429], p[430], p[431]); pointOut[144] = new SFVec3f(p[432], p[433], p[434]); pointOut[145] = new SFVec3f(p[435], p[436], p[437]); pointOut[146] = new SFVec3f(p[438], p[439], p[440]); pointOut[147] = new SFVec3f(p[441], p[442], p[443]); pointOut[148] = new SFVec3f(p[444], p[445], p[446]); pointOut[149] = new SFVec3f(p[447], p[448], p[449]); pointOut[150] = new SFVec3f(p[450], p[451], p[452]); pointOut[151] = new SFVec3f(p[453], p[454], p[455]); pointOut[152] = new SFVec3f(p[456], p[457], p[458]); pointOut[153] = new SFVec3f(p[459], p[460], p[461]); pointOut[154] = new SFVec3f(p[462], p[463], p[464]); pointOut[155] = new SFVec3f(p[465], p[466], p[467]); pointOut[156] = new SFVec3f(p[468], p[469], p[470]);  pointOut[157] = new SFVec3f(p[471], p[472], p[473]);        
    
    // End OUTPUT
    
              
    // ENGINE 2nd PART: 
    // Modify the two parameters clearSpanWidth and riseHeigh.
           
    o = 1;  
    p = 1;

    if (clearSpanWidth != 4){     
	o = clearSpanWidth/4;  
    }

    if (riseHeight != 2){     
	p = riseHeight/2;
    }    

    // End ENGINE 2nd PART
   
   
    // OUTPUT 2nd PART:
    // Output for clearSpanWidth and riseHeigh.
   
    computedScale  = new SFVec3f(o, p, 1); 

    // End OUTPUT 2nd PART:
}
/* Not needed, handled by X3D player automatically
function set_clearSpanWidth (newValue) {}
function set_riseHeight (newValue) {}
function set_depth (newValue) {}
function set_topAbutmentHeight (newValue) {}
function set_pierWidth (newValue) {}
function set_pierHeight (newValue) {}
function set_archHalf (newValue) {}
function set_archHalfExtensionWidth (newValue) {}
function set_onlyIntrados (newValue) {}
function set_archFilled (newValue) {}
function set_archHalfFilled (newValue) {}
function set_lintel (newValue) {}
*/
         
