'''
x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(profile="Interchange", version="3.2", 
Scene=Scene(children=[
Background(groundAngle=[float(0.05),float(1.52),float(1.56),float(1.5707)], groundColor=[(0.2,0.2,0),(0.3,0.3,0),(0.5,0.5,0.3),(0.1,0.3,0.4),(0,0.2,0.4)], skyAngle=[float(0.04),float(0.05),float(0.1),float(1.309),float(1.57)], skyColor=[(0.8,0.8,0.2),(0.8,0.8,0.2),(0.1,0.1,0.6),(0.1,0.1,0.6),(0.1,0.25,0.8),(0.6,0.6,0.9)]),
Shape(
geometry=
IndexedFaceSet(coordIndex=[0,1,2,-1,2,1,3,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,8,10,9,-1,9,10,11,-1,10,12,11,-1,11,12,13,-1,12,14,13,-1,13,14,15,-1,14,16,15,-1,15,16,17,-1,16,18,17,-1,19,20,21,-1,21,20,22,-1,20,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,38,39,40,-1,40,39,41,-1,39,42,41,-1,41,42,43,-1,42,44,43,-1,43,44,45,-1,44,46,45,-1,45,46,47,-1,46,48,47,-1,47,48,49,-1,48,50,49,-1,49,50,51,-1,50,52,51,-1,51,52,53,-1,52,54,53,-1,53,54,55,-1,54,56,55,-1,57,58,59,-1,59,58,60,-1,58,61,60,-1,60,61,62,-1,61,63,62,-1,62,63,64,-1,63,65,64,-1,64,65,66,-1,65,67,66,-1,66,67,68,-1,67,69,68,-1,68,69,70,-1,69,71,70,-1,70,71,72,-1,71,73,72,-1,72,73,74,-1,73,75,74,-1,76,77,78,-1,78,77,79,-1,77,80,79,-1,79,80,81,-1,80,82,81,-1,81,82,83,-1,82,84,83,-1,83,84,85,-1,84,86,85,-1,85,86,87,-1,86,88,87,-1,87,88,89,-1,88,90,89,-1,89,90,91,-1,90,92,91,-1,93,94,95,-1,95,94,96,-1,94,97,96,-1,96,97,98,-1,97,99,98,-1,98,99,100,-1,99,101,100,-1,100,101,102,-1,101,103,102,-1,102,103,104,-1,103,105,104,-1,104,105,106,-1,105,107,106,-1,108,109,110,-1,110,109,111,-1,109,86,111,-1,111,86,112,-1,86,113,112,-1,112,113,114,-1,113,82,114,-1,114,82,115,-1,82,77,115,-1,115,77,116,-1,77,76,116,-1,93,117,94,-1,94,117,97,-1,117,118,97,-1,97,118,119,-1,118,120,119,-1,119,120,99,-1,120,121,99,-1,99,121,101,-1,121,122,101,-1,101,122,123,-1,122,124,123,-1,125,126,127,-1,127,126,128,-1,126,129,128,-1,128,129,130,-1,129,131,130,-1,130,131,132,-1,131,133,132,-1,132,133,134,-1,133,126,134,-1,134,126,135,-1,126,136,135,-1,137,138,139,-1,139,138,140,-1,138,141,140,-1,140,141,142,-1,141,143,142,-1,142,143,144,-1,143,145,144,-1,144,145,146,-1,145,147,146,-1,146,147,148,-1,147,149,148,-1,150,151,152,-1,152,151,153,-1,151,154,153,-1,153,154,155,-1,154,156,155,-1,155,156,157,-1,156,158,157,-1,157,158,159,-1,158,160,159,-1,159,160,161,-1,160,162,161,-1,163,164,165,-1,165,164,166,-1,164,167,166,-1,166,167,168,-1,167,169,168,-1,168,169,170,-1,169,171,170,-1,170,171,172,-1,171,173,172,-1,172,173,174,-1,173,175,174,-1,176,177,178,-1,178,177,179,-1,177,180,179,-1,179,180,181,-1,180,182,181,-1,181,182,183,-1,182,184,183,-1,183,184,185,-1,184,186,185,-1,185,186,187,-1,186,188,187,-1,189,190,191,-1,189,192,190,-1,189,193,192,-1,189,194,193,-1,189,195,194,-1,189,196,195,-1,189,197,196,-1,189,198,197,-1,189,199,198,-1,189,191,199,-1,200,201,202,-1,200,203,201,-1,200,204,203,-1,200,205,204,-1,200,206,205,-1,200,207,206,-1,200,208,207,-1,200,209,208,-1,200,210,209,-1,200,202,210,-1,211,212,213,-1,213,212,214,-1,212,215,214,-1,214,215,216,-1,215,217,216,-1,216,217,218,-1,217,219,218,-1,218,219,220,-1,219,221,220,-1,220,221,222,-1,223,224,225,-1,223,226,224,-1,223,227,226,-1,223,228,227,-1,223,229,228,-1,223,230,229,-1,223,231,230,-1,223,232,231,-1,223,233,232,-1,223,225,233,-1,234,235,236,-1,234,237,235,-1,234,238,237,-1,234,239,238,-1,234,240,239,-1,234,241,240,-1,234,242,241,-1,234,243,242,-1,234,244,243,-1,234,236,244,-1,245,246,247,-1,247,246,248,-1,246,249,248,-1,248,249,250,-1,249,251,250,-1,250,251,252,-1,251,253,252,-1,252,253,254,-1,253,255,254,-1,255,256,257,-1,257,256,258,-1,256,259,258,-1,258,259,260,-1,259,261,260,-1,260,261,262,-1,261,263,262,-1,262,263,264,-1,263,265,264,-1,266,267,268,-1,268,267,269,-1,267,270,269,-1,269,270,118,-1,270,271,118,-1,118,271,120,-1,271,122,120,-1,120,122,121,-1,272,273,110,-1,272,274,273,-1,272,275,274,-1,272,276,275,-1,272,277,276,-1,272,115,277,-1,272,110,115,-1,278,279,280,-1,278,281,279,-1,278,282,281,-1,278,283,282,-1,278,284,283,-1,278,285,284,-1,278,280,285,-1,286,287,288,-1,286,289,287,-1,286,290,289,-1,286,291,290,-1,286,292,291,-1,286,293,292,-1,286,288,293,-1,16,294,18,-1,18,294,295,-1,294,296,295,-1,295,296,297,-1,296,298,297,-1,297,298,0,-1,298,1,0,-1,35,299,37,-1,37,299,300,-1,299,301,300,-1,300,301,302,-1,301,303,302,-1,302,303,19,-1,303,20,19,-1,304,305,306,-1,304,307,305,-1,304,308,307,-1,304,309,308,-1,304,310,309,-1,304,306,310,-1,311,136,126,-1,311,312,136,-1,311,313,312,-1,311,314,313,-1,311,125,314,-1,311,126,125,-1,315,316,317,-1,317,316,318,-1,316,319,318,-1,318,319,320,-1,319,321,320,-1,320,321,322,-1,261,259,323,-1,323,259,324,-1,259,256,324,-1,324,256,325,-1,256,255,325,-1,325,255,253,-1,326,327,328,-1,328,327,329,-1,327,330,329,-1,329,330,331,-1,330,332,331,-1,331,332,333,-1,85,87,334,-1,334,87,335,-1,87,89,335,-1,335,89,336,-1,89,337,336,-1,338,339,340,-1,340,339,341,-1,339,342,341,-1,341,342,343,-1,342,344,343,-1,345,346,347,-1,347,346,348,-1,346,349,348,-1,348,349,350,-1,349,351,350,-1,352,142,144,-1,352,353,142,-1,352,354,353,-1,352,355,354,-1,352,144,355,-1,185,356,183,-1,183,356,357,-1,356,358,357,-1,357,358,359,-1,358,360,359,-1,361,362,363,-1,363,362,364,-1,362,365,364,-1,364,365,366,-1,365,367,366,-1,368,369,370,-1,370,369,371,-1,369,149,371,-1,371,149,145,-1,149,147,145,-1,199,191,372,-1,372,191,373,-1,191,190,373,-1,373,190,374,-1,190,192,374,-1,202,201,375,-1,375,201,376,-1,201,203,376,-1,376,203,377,-1,203,204,377,-1,378,195,196,-1,378,379,195,-1,378,380,379,-1,378,381,380,-1,378,196,381,-1,382,208,383,-1,382,207,208,-1,382,384,207,-1,382,385,384,-1,382,383,385,-1,54,44,56,-1,56,44,386,-1,44,42,386,-1,386,42,38,-1,42,39,38,-1,233,225,387,-1,387,225,388,-1,225,224,388,-1,388,224,389,-1,224,226,389,-1,243,244,390,-1,390,244,391,-1,244,236,391,-1,391,236,392,-1,236,235,392,-1,393,229,230,-1,393,394,229,-1,393,395,394,-1,393,396,395,-1,393,230,396,-1,397,398,239,-1,397,399,398,-1,397,400,399,-1,397,240,400,-1,397,239,240,-1,57,69,58,-1,58,69,61,-1,69,67,61,-1,61,67,63,-1,67,65,63,-1,331,327,332,-1,332,327,401,-1,327,326,401,-1,401,326,402,-1,326,403,402,-1,122,270,124,-1,124,270,404,-1,270,267,404,-1,404,267,266,-1,108,405,109,-1,109,405,86,-1,405,90,86,-1,86,90,88,-1,406,407,408,-1,406,251,407,-1,406,253,251,-1,406,325,253,-1,260,262,258,-1,258,262,409,-1,262,264,409,-1,409,264,410,-1,182,180,184,-1,184,180,368,-1,180,176,368,-1,368,176,369,-1,48,46,50,-1,50,46,52,-1,46,44,52,-1,52,44,54,-1,57,411,69,-1,69,411,71,-1,411,75,71,-1,71,75,73,-1,112,114,111,-1,111,114,110,-1,114,115,110,-1,274,412,273,-1,273,412,110,-1,412,108,110,-1,413,414,415,-1,415,414,416,-1,414,417,416,-1,282,418,281,-1,281,418,419,-1,418,415,419,-1,307,308,420,-1,420,308,421,-1,308,309,421,-1,292,293,417,-1,417,293,422,-1,293,288,422,-1,252,423,248,-1,248,423,247,-1,423,424,247,-1,144,146,425,-1,425,146,426,-1,146,148,426,-1,178,179,427,-1,427,179,428,-1,179,181,428,-1,102,104,429,-1,429,104,430,-1,104,106,430,-1,333,431,432,-1,432,431,433,-1,431,434,433,-1,123,105,101,-1,101,105,103,-1,86,84,113,-1,113,84,82,-1,435,436,102,-1,102,436,100,-1,337,89,437,-1,437,89,91,-1,142,353,140,-1,140,353,139,-1,371,145,141,-1,141,145,143,-1,183,357,181,-1,181,357,359,-1,438,439,440,-1,440,439,441,-1,442,443,444,-1,444,443,445,-1,446,215,447,-1,447,215,212,-1,216,448,217,-1,217,448,446,-1,449,117,93,-1,119,99,97,-1,270,122,271,-1,77,82,80,-1,269,450,268,-1,451,105,452,-1,92,90,405,-1,305,453,306,-1,310,306,454,-1,422,416,417,-1,419,279,281,-1,418,455,415,-1,456,339,457,-1,458,459,342,-1,344,342,459,-1,460,461,462,-1,463,464,465,-1,249,407,251,-1,248,250,252,-1,354,355,466,-1,467,320,322,-1,187,356,185,-1,361,363,468,-1,469,367,365,-1,102,429,470,-1,323,324,471,-1,472,473,474,-1,435,102,470,-1,107,105,451,-1,194,195,379,-1,381,196,197,-1,383,208,209,-1,206,207,384,-1,448,215,446,-1,231,396,230,-1,394,228,229,-1,398,238,239,-1,241,400,240,-1,432,331,333,-1,339,338,457,-1,177,176,180,-1], 
coord=
Coordinate(point=[(12.1111,0.7763,-4.0313),(11.5664,7.533,-1.6799),(12.6423,0.7576,-2.2913),(12.9964,1.3985,-1.1511),(13.241,2.8889,3.5766),(13.9352,0.5642,3.3458),(13.5398,1.8846,6.1578),(14.0227,0.3553,5.9915),(12.8121,1.2886,7.9276),(13.3814,0.3635,7.8173),(10.6653,1.2552,8.2676),(10.3899,-0.4079,8.267),(9.643,2.2737,6.6579),(9.6796,-0.756,6.6469),(9.1149,3.5421,4.1969),(9.156,-0.6646,4.0654),(8.8287,6.8339,-1.3017),(9.0536,0.3781,-0.5614),(9.1932,-0.1249,-1.7816),(-8.5995,-0.1276,-1.7808),(-8.2406,6.8269,-1.3018),(-8.4578,0.3772,-0.5606),(-8.5634,-0.6629,4.0662),(-8.5276,3.543,4.1977),(-9.0907,-0.7513,6.6477),(-9.0494,2.2724,6.6587),(-9.7986,-0.3999,8.2678),(-10.071,1.2541,8.2684),(-12.7914,0.3642,7.8181),(-12.2179,1.2833,7.9284),(-13.4278,0.3634,5.9924),(-12.9518,1.8819,6.1586),(-13.349,0.5653,3.3467),(-12.6486,2.8904,3.5775),(-12.4143,1.398,-1.1503),(-10.978,7.5272,-1.6796),(-12.0494,0.7614,-2.2905),(-11.5233,0.7688,-4.0305),(-32.2328,59.4883,3.712),(-34.3403,59.2573,5.0581),(-33.9092,58.8916,4.7731),(-34.597,58.7288,4.746),(-33.583,60.0657,4.2192),(-34.0081,59.1725,3.7082),(-33.0846,61.3062,2.2609),(-33.8838,59.6172,3.271),(-35.3134,61.0611,2.8838),(-35.3533,59.9104,3.1423),(-38.288,60.6035,2.702),(-38.3145,60.0221,2.7916),(-38.2831,60.6806,1.4181),(-38.3125,59.8403,1.0553),(-35.4057,61.1787,0.6147),(-35.3386,59.9254,0.3929),(-33.1217,60.9199,0.6503),(-30.5175,59.53,0.8564),(-29.822,60.5321,1.5748),(30.2168,60.5278,1.5832),(33.5143,60.9141,0.6584),(30.9011,59.5304,0.8638),(35.7352,59.9257,0.3971),(35.7978,61.1733,0.6294),(38.6986,59.8346,1.0685),(38.6762,60.6837,1.4224),(38.7007,60.0203,2.7949),(38.6882,60.6036,2.7068),(35.7492,59.9148,3.1565),(35.6995,61.0589,2.888),(34.2787,59.6077,3.2804),(33.4831,61.3111,2.2701),(34.3942,59.1723,3.7174),(33.9719,60.0701,4.2333),(34.9881,58.7276,4.7585),(34.7327,59.2506,5.0654),(34.302,58.8946,4.7751),(32.6363,59.4889,3.7225),(-2.5161,62.3757,0.435),(-5.8998,60.0771,-2.4177),(-6.7407,61.6336,0.8021),(-8.9524,62.9799,0.7386),(-9.0057,58.4339,-0.9401),(-9.0353,55.6437,1.0884),(-6.5842,57.7098,-3.8669),(-8.1661,50.4225,1.3222),(-5.3361,52.3239,-2.9596),(-5.5961,46.9745,1.1472),(0.2839,47.1435,-2.9137),(-3.3261,43.1688,-1.8814),(0.2939,41.9421,-3.4081),(0.2938,38.2973,-4.2909),(3.9739,43.1711,-1.8912),(3.9538,38.2877,-5.2809),(6.3139,42.3655,-0.0557),(7.4183,61.5565,0.8022),(9.6071,58.8719,4.6276),(9.9809,62.8217,0.7442),(9.6139,55.65,1.0884),(6.4995,57.8363,6.8348),(8.7939,50.4324,1.3231),(4.9139,51.7878,5.6218),(6.2839,46.9745,1.1472),(0.2839,46.8023,5.0171),(3.9038,42.5041,3.3743),(0.2938,42.5642,4.6201),(0.2939,39.9144,4.1497),(-3.2862,42.5379,3.3616),(-3.3625,40.4689,2.8776),(-5.6061,42.4836,0.3207),(8.7939,50.4324,1.3231),(5.9539,52.3239,-2.9596),(7.1835,57.6994,-3.8715),(3.2839,52.2793,-3.6788),(0.2839,52.3104,-3.0889),(-2.6961,52.2793,-3.6788),(0.2939,57.7029,-3.6109),(0.3039,60.49,-3.0207),(-1.5261,61.1667,-1.9245),(2.8039,58.7054,2.5319),(0.2639,59.6646,5.3857),(3.3939,56.5639,7.6591),(0.6539,53.6248,7.7232),(0.4739,50.2617,6.197),(-4.2761,51.8002,5.7411),(-5.5961,46.9745,1.1472),(-8.1661,50.4225,1.3222),(2.8839,68.0856,7.0037),(0.3039,67.2211,7.3694),(2.8839,67.0781,6.3816),(2.8839,65.8937,6.666),(1.2139,65.9108,7.2951),(1.4239,61.7888,7.1214),(0.3139,65.9376,7.8542),(-0.7761,61.7888,7.1214),(-0.5961,65.9108,7.2951),(-2.2661,65.8937,6.666),(-2.2661,67.0781,6.3816),(-2.2661,68.0856,7.0037),(8.8287,6.8339,-1.3017),(4.357,16.7102,0.868),(8.5839,6.9264,-3.348),(5.0648,16.9052,-3.7503),(4.2785,24.4627,-1.1308),(6.8104,21.1322,-5.3385),(6.3092,24.9009,-2.9964),(8.8391,25.2581,-1.5884),(5.5008,28.9121,-4.8634),(8.4045,35.0962,-3.4681),(4.7207,36.8925,-5.9443),(3.9538,38.2877,-5.2809),(1.5238,35.0774,-4.422),(10.5256,0.8421,-4.5213),(12.1111,0.7763,-4.0313),(9.1688,0.0136,-3.5916),(9.1932,-0.1249,-1.7816),(12.6423,0.7576,-2.2913),(9.0536,0.3781,-0.5614),(12.9964,1.3985,-1.1511),(9.156,-0.6646,4.0654),(13.9352,0.5642,3.3458),(9.6796,-0.756,6.6469),(14.0227,0.3553,5.9915),(10.3899,-0.4079,8.267),(13.3814,0.3635,7.8173),(-12.7914,0.3642,7.8181),(-13.4278,0.3634,5.9924),(-9.7986,-0.3999,8.2678),(-9.0907,-0.7513,6.6477),(-13.349,0.5653,3.3467),(-8.5634,-0.6629,4.0662),(-12.4143,1.398,-1.1503),(-8.4578,0.3772,-0.5606),(-12.0494,0.7614,-2.2905),(-8.5995,-0.1276,-1.7808),(-11.5233,0.7688,-4.0305),(-8.5786,0.0216,-3.5907),(-9.9282,0.8377,-4.5205),(-0.9262,35.0774,-4.422),(-4.1302,36.8944,-5.9468),(-3.3662,38.2877,-5.2809),(-7.8148,35.0956,-3.4633),(-4.9101,28.9165,-4.8719),(-8.2486,25.2622,-1.5942),(-5.7194,24.901,-2.9923),(-6.2106,21.1306,-5.3454),(-3.6878,24.4684,-1.1265),(-4.7705,16.9026,-3.7545),(-3.7579,16.7077,0.8714),(-7.9945,6.9255,-3.3476),(-8.2406,6.8269,-1.3018),(-20.403,60.5414,1.8428),(-24.3353,62.0959,0.4656),(-24.3359,61.9547,3.319),(-22.8889,59.1802,-0.7701),(-20.5872,59.2307,-1.1577),(-18.0258,59.0059,-0.7678),(-12.6424,61.5763,0.4631),(-13.9582,61.5095,2.7731),(-18.0303,58.9244,4.1022),(-20.463,59.1222,2.7923),(-22.8928,59.0886,4.0963),(-20.5042,57.6826,1.7118),(-24.4973,57.4677,0.2486),(-22.8889,59.1802,-0.7701),(-24.4973,57.3365,3.102),(-22.8928,59.0886,4.0963),(-20.463,59.1222,2.7923),(-18.0303,58.9244,4.1022),(-12.8292,55.957,3.1012),(-12.9095,56.1327,0.3912),(-18.0258,59.0059,-0.7678),(-20.5872,59.2307,-1.1577),(-38.3125,59.8403,1.0553),(-35.3386,59.9254,0.3929),(-38.3145,60.0221,2.7916),(-35.3533,59.9104,3.1423),(-32.2399,59.2262,1.5464),(-33.8838,59.6172,3.271),(-30.511,59.9096,2.6998),(-33.8838,59.6172,3.271),(-32.2328,59.4883,3.712),(-34.0081,59.1725,3.7082),(-33.9092,58.8916,4.7731),(-34.597,58.7288,4.746),(20.7972,60.5451,1.8542),(24.7346,61.9636,3.3285),(24.7234,62.0942,0.4746),(23.2859,59.0931,4.1042),(20.8603,59.1158,2.8037),(18.4174,58.9261,4.1036),(14.3503,61.5175,2.7845),(13.034,61.5728,0.4746),(18.4122,59.0076,-0.7663),(20.9829,59.2354,-1.1463),(23.2813,59.1846,-0.7621),(20.8934,57.6853,1.7232),(23.2813,59.1846,-0.7621),(24.8859,57.465,0.2555),(20.9829,59.2354,-1.1463),(18.4122,59.0076,-0.7663),(13.2986,56.1285,0.4027),(13.2199,55.9521,3.1126),(18.4174,58.9261,4.1036),(20.8603,59.1158,2.8037),(23.2859,59.0931,4.1042),(24.897,57.3345,3.1094),(11.5664,7.533,-1.6799),(11.7458,17.9918,0.1218),(10.2882,7.1425,-0.577),(7.8771,20.8341,2.5002),(8.8391,25.2581,-1.5884),(7.1488,24.4411,3.3665),(6.5767,28.6193,2.9668),(4.2785,24.4627,-1.1308),(1.5201,33.6095,1.9005),(1.4255,31.7434,0.1494),(0.2983,33.6168,1.8978),(-0.9296,33.6149,1.9066),(-0.836,31.7432,0.1411),(-3.6878,24.4684,-1.1265),(-5.9877,28.6176,2.9704),(-6.5597,24.4404,3.3728),(-8.2486,25.2622,-1.5942),(-7.2885,20.8305,2.4938),(-11.146,17.9925,0.1144),(-9.6987,7.1431,-0.5761),(-10.978,7.5272,-1.6796),(-8.9524,62.9799,0.7386),(-9.0058,58.8719,4.6229),(-6.7407,61.6336,0.8021),(-2.2461,58.7054,2.5319),(-5.908,57.8342,6.8302),(-2.7961,56.5639,7.6591),(6.5011,60.0771,-2.4129),(9.607,58.4339,-0.9354),(9.9809,62.8217,0.7442),(7.4183,61.5565,0.8022),(3.0939,62.3757,0.435),(2.1339,61.1674,-1.9145),(-2.8861,68.9993,3.1669),(-2.2661,67.0781,6.3816),(-2.2661,68.0856,7.0037),(-2.8861,66.2417,2.698),(-1.3961,66.6191,-0.5748),(-1.3761,70.5305,-0.0662),(-1.4361,71.654,2.3993),(-1.4261,71.1581,6.0127),(3.5039,68.9993,3.1669),(2.8839,68.0856,7.0037),(2.8839,67.0781,6.3816),(2.0439,71.1581,6.0127),(2.0539,71.654,2.3994),(1.9939,70.5305,-0.0662),(1.9939,66.6287,-0.5721),(3.5039,66.2417,2.698),(8.5839,6.9264,-3.348),(9.1688,0.0136,-3.5916),(9.7527,7.3056,-4.2387),(10.5256,0.8421,-4.5213),(10.9815,7.5402,-3.7076),(-10.3919,7.5405,-3.707),(-9.9282,0.8377,-4.5205),(-9.1628,7.3074,-4.2379),(-8.5786,0.0216,-3.5907),(-7.9945,6.9255,-3.3476),(0.3039,71.9397,2.4189),(-1.4361,71.654,2.3993),(0.3039,71.4177,6.0144),(-1.3761,70.5305,-0.0662),(0.3039,70.8588,-0.0864),(1.9939,70.5305,-0.0662),(2.0539,71.654,2.3994),(0.3039,68.1176,7.8347),(-1.4261,71.1581,6.0127),(0.3039,71.4177,6.0144),(2.0439,71.1581,6.0127),(12.8121,1.2886,7.9276),(13.5398,1.8846,6.1578),(10.6653,1.2552,8.2676),(9.643,2.2737,6.6579),(13.241,2.8889,3.5766),(9.1149,3.5421,4.1969),(11.5664,7.533,-1.6799),(10.2882,7.1425,-0.577),(-8.2789,34.7759,0.7168),(-3.3625,40.4689,2.8776),(0.6239,36.3244,4.3584),(35.7352,59.9257,0.3971),(32.6267,59.2217,1.5525),(30.9011,59.5304,0.8638),(30.2751,58.8479,1.9906),(30.9012,59.9106,2.7077),(30.9012,59.9106,2.7077),(34.2787,59.6077,3.2804),(34.2787,59.6077,3.2804),(-5.6061,42.4836,0.3207),(-3.3662,38.2877,-5.2809),(-0.9262,35.0774,-4.422),(0.2938,35.0166,-2.062),(3.0939,62.3757,0.435),(1.8139,63.5772,4.8048),(2.8039,58.7054,2.5319),(0.2639,59.6646,5.3857),(-1.3061,63.5772,4.8048),(-2.2461,58.7054,2.5319),(-2.5161,62.3757,0.435),(-2.5161,62.3757,0.435),(-1.3961,66.6191,-0.5748),(-1.5261,61.1667,-1.9245),(0.3039,60.49,-3.0207),(1.9939,66.6287,-0.5721),(2.1339,61.1674,-1.9145),(3.0939,62.3757,0.435),(10.0227,18.1873,-4.5078),(9.7527,7.3056,-4.2387),(10.9815,7.5402,-3.7076),(11.7458,17.9918,0.1218),(-9.1628,7.3074,-4.2379),(-9.1375,18.1899,-4.5088),(-10.3919,7.5405,-3.707),(-11.146,17.9925,0.1144),(-10.978,7.5272,-1.6796),(-10.071,1.2541,8.2684),(-9.0494,2.2724,6.6587),(-12.9518,1.8819,6.1586),(-12.6486,2.8904,3.5775),(-8.5276,3.543,4.1977),(-10.978,7.5272,-1.6796),(-9.6987,7.1431,-0.5761),(-0.836,31.7432,0.1411),(0.2938,35.0166,-2.062),(0.2983,33.6168,1.8978),(1.4255,31.7434,0.1494),(-30.511,59.9096,2.6998),(-29.822,60.5321,1.5748),(-30.5175,59.53,0.8564),(-30.5175,59.53,0.8564),(-29.8756,58.8523,1.9826),(-30.511,59.9096,2.6998),(-7.0282,60.4277,1.8427),(-8.7725,59.3353,-1.3477),(-6.5159,57.6144,1.8917),(-9.1486,58.7034,4.7621),(-8.1766,55.6949,1.9311),(-8.7725,59.3353,-1.3477),(-9.1486,58.7034,4.7621),(-6.5159,57.6144,1.8917),(-30.511,59.9096,2.6998),(30.9011,59.5304,0.8638),(30.2168,60.5278,1.5832),(30.9012,59.9106,2.7077),(30.9012,59.9106,2.7077),(30.2751,58.8479,1.9906),(30.9011,59.5304,0.8638),(7.4167,60.4245,1.8542),(9.5384,58.8446,4.7699),(6.9084,57.6155,1.8932),(9.1712,59.3374,-1.3362),(8.5665,55.6993,1.9425),(9.1712,59.3374,-1.3362),(6.9084,57.6155,1.8932),(9.5384,58.8446,4.7699),(35.7492,59.9148,3.1565),(38.7007,60.0203,2.7949),(38.6986,59.8346,1.0685),(-9.0353,55.6437,1.0884),(6.2839,46.9745,1.1472),(3.9536,40.4604,2.8806),(8.8786,34.7757,0.7106),(6.3139,42.3655,-0.0557),(-3.7579,16.7077,0.8714),(-8.2406,6.8269,-1.3018),(30.9012,59.9106,2.7077),(9.6139,55.65,1.0884),(-1.3061,63.5772,4.8048),(1.8139,63.5772,4.8048),(-0.7761,61.7888,7.1214),(1.4239,61.7888,7.1214),(2.7539,62.9081,3.7285),(-2.1161,62.9135,3.7821),(-2.2661,65.8937,6.666),(-1.3961,66.6191,-0.5748),(1.9939,66.6287,-0.5721),(2.8839,65.8937,6.666),(4.357,16.7102,0.868),(8.8287,6.8339,-1.3017),(8.8786,34.7757,0.7106),(6.3139,42.3655,-0.0557),(-5.6061,42.4836,0.3207),(-8.2789,34.7759,0.7168),(3.9536,40.4604,2.8806),(0.6239,36.3244,4.3584),(34.3942,59.1723,3.7174),(32.6363,59.4889,3.7225),(34.302,58.8946,4.7751),(34.9881,58.7276,4.7585),(6.6239,42.143,0.5496),(6.6039,46.7876,1.7832),(1.5238,35.0774,-4.422),(-5.6061,42.4836,0.3207),(-6.1461,42.333,0.8811),(-5.5961,46.9745,1.1472),(-6.1361,46.8545,1.7088),(6.2839,46.9745,1.1472),(6.6039,46.7876,1.7832),(6.3139,42.3655,-0.0557),(6.6239,42.143,0.5496),(-29.8756,58.8523,1.9826),(-30.5175,59.53,0.8564),(-30.511,59.9096,2.6998),(3.0939,62.3757,0.435),(-2.5161,62.3757,0.435),(-6.1461,42.333,0.8811),(-6.1361,46.8545,1.7088),(-1.4261,71.1581,6.0127),(2.0439,71.1581,6.0127),(-1.3061,63.5772,4.8048),(2.7539,62.9081,3.7285),(1.9939,66.6287,-0.5721),(-2.1161,62.9135,3.7821),(-1.3961,66.6191,-0.5748),(-0.5961,65.9108,7.2951),(0.3139,65.9376,7.8542),(0.3039,67.2211,7.3694),(0.3039,67.2211,7.3694),(0.3139,65.9376,7.8542),(1.2139,65.9108,7.2951),(11.5664,7.533,-1.6799),(8.8287,6.8339,-1.3017),(-12.2179,1.2833,7.9284),(-8.2406,6.8269,-1.3018),(6.3139,42.3655,-0.0557),(-5.6061,42.4836,0.3207),(-6.1361,46.8545,1.7088),(-3.2862,42.5379,3.3616),(-5.5961,46.9745,1.1472)])), 
appearance=
Appearance(
texture=
ImageTexture(url=["../resources/images/warrior.gif"])))]))
.XML())