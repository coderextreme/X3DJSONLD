'''
x3d.py package 4.0.63.7 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.2", 
head=head(), 
Scene=Scene(children=[
#A png image file for the cloud texture must be designated in the ecmascript node.

Viewpoint(description="Main", jump=False, orientation=((0,1,0,1.57)), position=((50000,1000,42000))),
Viewpoint(description="Light House Tower", jump=False, orientation=((0,1,0,1.3)), position=((45000,1290,44000))),
Viewpoint(description="centerWest", jump=False, orientation=((0,1,0,2.5)), position=((48000,1000,20000))),
Background(groundColor=[(0,0,1)], skyColor=[(0,0,1)]),
DirectionalLight(ambientIntensity=1, direction=((-1,0,0)), global_=True),
Group(DEF="Terrain", children=[
Transform(scale=((50,50,50)), translation=((25000,0,25000)), children=[
Inline(url=["MontereyBayLargeMesh.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d","MontereyBayLargeMesh.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl"])]),
Transform(rotation=((1,0,0,1.57)), translation=((25000,0,25000)), children=[
Shape(
geometry=
Rectangle2D(size=((77000,55000))), 
appearance=
Appearance(
texture=
ImageTexture(url=["ocean.png","https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png"])))])]),
Group(DEF="Placemarks", children=[
Transform(scale=((50,50,50)), translation=((45000,30,44000)), children=[
Inline(url=["Lighthouse.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d","Lighthouse.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl"])])]),
Group(DEF="Clouds", children=[
Transform(DEF="Cumulus"),
Transform(DEF="Cirrus"),
Transform(DEF="Fog"),
Script(DEF="PixelScript", directOutput=True, field=[field(name="Cumulus", accessType="initializeOnly", type="SFNode", children=[
Transform(USE="Cumulus")]),
field(name="Cirrus", accessType="initializeOnly", type="SFNode", children=[
Transform(USE="Cirrus")]),
field(name="Fog", accessType="initializeOnly", type="SFNode")
], 
#['', '', 'ecmascript:', '', '', 'function cumulustranslation() // These values designate the boundary location of the cloud', '{', '\tX = 50000*Math.random();          //  X horizontal range', '\tY = 1000 + 300*Math.random();\t //  Y vertical base + range', '\tZ = 50000*Math.random();         // z horizontal range', '', "\trandomt = new String(X+' '+Y+' '+Z);", '', '\treturn randomt;', '\t', '}', '', '', '', 'function cumulusscale() // these values scale a cloud within a designated size', '{', '', '\tvar maxscale = 1;', '', '\tscale = Math.round(9+maxscale*Math.random());', '\tX = 1.5*scale;', '\tY = scale;', '\tZ = scale;', '', "\trandomscale = new String(X+' '+Y+' '+Z);", '', '\treturn randomscale;', '\t', '}', '', '', 'function cirrustranslation() // These values designate the boundary location of the cloud', '{', '\tX = 50000*Math.random();          //  X horizontal range', '\tY = 8000 + 1000*Math.random();\t //  Y vertical base + range', '\tZ = 50000*Math.random();         // z horizontal range', '', "\trandomt = new String(X+' '+Y+' '+Z);", '', '\treturn randomt;', '\t', '}', '', '', '', 'function cirrusscale() // these values scale a cloud within a designated size', '{', '', '\tvar maxscale = 1;', '', '\tscale = Math.round(9+maxscale*Math.random());', '\tX = 1.5*scale;', '\tY = 2*Math.random();', '\tZ = 1.5*scale;', '', "\trandomscale = new String(X+' '+Y+' '+Z);", '', '\treturn randomscale;', '\t', '}', '', '', 'function cumulussectiontranslation() // These random values place another portion of cumulus type cloud', '{', '', '\trandomtheta = 6.28319*Math.random();', '\trandomphi = .7854*Math.random();', '\trandomradius = 90 + 5*Math.random();//the first whole number should be close to the sectionradius', '', '\tX = randomradius*Math.cos(randomtheta)*Math.sin(randomphi);', '\tZ = randomradius*Math.sin(randomtheta)*Math.sin(randomphi);', '\tY = randomradius*Math.cos(randomphi);', '\t', '', "\trandomt = new String(X+' '+Y+' '+Z);", '', '\treturn randomt;', '\t', '}', '', 'function cirrussectiontranslation() // These random values place another portion of cirrus type cloud', '{', '', '\trandomtheta = 6.28319*Math.random();', '\trandomphi = .7854*Math.random();', '\trandomradius = 90 + 5*Math.random();//the first whole number should be close to the sectionradius', '', '\tX = randomradius*Math.cos(randomtheta)*Math.sin(randomphi);', '\tZ = randomradius*Math.sin(randomtheta)*Math.sin(randomphi);', '\tY = randomradius*Math.cos(randomphi);', '\t', '', "\trandomt = new String(X+' '+Y+' '+Z);", '', '\treturn randomt;', '\t', '}', '', '', 'function rotation() // This random value is for the billboard rotation not used in this script', '{', '', '', '\tradians = 6.28*Math.random();', '', "\trandomr = new String('0 0 1 ' + radians );", '\t', '\t', '\treturn randomr;', '\t', '}', '', 'function cumulus()', '{', '', 'var maxi = 20;  // number of clouds', '', 'var maxj = 5; // denotes how many portions affecting the size of the cloud', '', 'var maxk = 8;  // number of billboards indicating cloud density', '', 'var sectionradius = 100;  //radius of individual cloud sections', '', '', '', '', '', 'for (var i=0; i < maxi; i++) ', '{', '', '', '', "CloudStringA = '\tTransform {\t\t
#' +", "'    scale '+ cumulusscale() + '               \t
#' +", "'    translation '+ cumulustranslation() + '    
#' +    // cloud placement", "'    children [\t                                
#';", '', '', 'CloudStringB = new Array();', 'CloudStringF = new Array();', '', '   \tfor (var j=0; j < maxj; j++)', '   \t{', '', '\tradius = 0;', '', "\tCloudStringB[j]= '  Transform {\t\t    \t       
#' +", "\t'    translation '+ cumulussectiontranslation() + '    
#' +     // section placement", "\t'    children [\t                                       
#';", '', '\t', '\tCloudStringC = new Array();', '\timage = new String();', '', '      \t\tfor (var k=1; k < maxk; k++)  // maxk value denotes how many textured billboards make up the cloud ', '      \t\t{', '', '', '\t\trandomtheta = 6.28319*Math.random();', '\t\trandomphi = 1.57079*Math.random();', '\t\tradius = radius+(sectionradius/maxk); // radius incremental steps based on billow radius and max billboards', '', '\t\tX = radius*Math.cos(randomtheta)*Math.sin(randomphi);', '\t\tZ = radius*Math.sin(randomtheta)*Math.sin(randomphi);', '\t\tY = radius*Math.cos(randomphi);', '', '', '\t\tif (Y <= 30) //cloud shading and lighting control', '  \t{\t', '\timage = \' "CloudTexture1_5.png" "https://savage.nps.edu/Savage/Environment/Spheretexture.png" 
#\';', '  \t}', '', '  \t\telse', '  \t{\t', '\timage = \' "CloudTexture1_4.png" "https://savage.nps.edu/Savage/Environment/Spheretexture.png" 
#\';', '  \t}', '', '\t', '\t\t', "\t\tBillboardtranslation = new String(X+' '+Y+' '+Z);", '', "\t\tCloudStringC[k] = '\tTransform {\t\t                
#' +", "\t\t'            translation '+ Billboardtranslation   + '          
#' +     // random billboard placement within radius designated above", "\t\t'\t  children [\t                                        
#' +", "\t\t'\t      Billboard {\t                                
#' +", "\t\t'\t        axisOfRotation 0 0 0\t                        
#' +     // 0 0 0 designates rotation on all axis", "\t\t'\t        children [\t                                
#' +", "\t\t'\t            Transform {\t                \t\t
#' +", "\t\t'\t              rotation  0 0 0 0 \t\t        
#' +     // a rotation of the individual billboards can be defined", "\t\t'\t              children [\t                        
#' +", "\t\t'\t                  Shape {\t                        
#' +", "\t\t'\t                    appearance Appearance {\t        
#' +", "\t\t'\t\t\t\tmaterial Material {\t\t
#' +", "\t\t'\t\t\t\t                }  \t\t
#' +", "\t\t'\t                      texture ImageTexture {\t        
#' +", "\t\t'\t                        url [ ' + image + ' ]           
#' + ", "\t\t'\t                      }\t                                
#' +", "\t\t'\t                    }\t                                
#' +", "\t\t'\t                    geometry IndexedFaceSet {\t        
#' +     // define type of geometry to texture", "\t\t'\t                      coordIndex [ 0, 1, 2, 3 ]\t        
#' +", "\t\t'\t\t\t      solid FALSE\t\t        
#' +", "\t\t'\t                      coord Coordinate {\t        
#' +", "\t\t'\t                        point [ 50 50 0,\t        
#' +     // define size of the geometry. Here 100 meter 2D square.", "\t\t'\t                                50 -50 0,\t        
#' +", "\t\t'\t                               -50 -50 0,\t        
#' +", "\t\t'\t                               -50 50 0 ]\t        
#' +", "\t\t'\t                      }\t                                
#' +", "\t\t'\t                    }\t                                
#' +", "\t\t'\t                  }\t                                
#' +", "\t\t'\t              ]\t                                        
#' +", "\t\t'\t            }\t                                        
#' +", "\t\t'\t       ]\t                                        
#' +", "\t\t'\t   }\t                                                
#' +", "\t\t'      ]\t                                                
#' +", "\t\t'     }\t                                                        
#';      ", '\t\t', '', '\t\t}', '', "\tCloudStringD = CloudStringC.join(' ');", '', '\t', "\tCloudStringE = '   ]\t                 
#' +", "\t'\t}\t                         
#';", '', '\tCloudStringF[j] = CloudStringB[j] + CloudStringD +CloudStringE;', '', '', '\t}', '', "CloudStringG = CloudStringF.join(' ');", '', "CloudStringH = '      ]\t                                        
#' +", "'     }\t                                                        
#' +", "'#########################################################      
#';", '', 'CloudString = CloudStringA + CloudStringG + CloudStringH;', '', '', '', 'newNode = Browser.createVrmlFromString(CloudString);', 'Cumulus.children[i] = newNode[0];', '', '', '   }', '', '}', '', 'function cirrus()', '', '{', '', 'var maxi = 2;  // number of clouds', '', 'var maxj = 5; // denotes how many portions affecting the size of the cloud', '', 'var maxk = 8;  // number of billboards indicating cloud density', '', 'var sectionradius = 1000;  //radius of individual cloud sections', '', '', '', '', '', 'for (var i=0; i < maxi; i++) ', '{', '', '', '', "CloudStringA = '\tTransform {\t\t 
#' +", "'    scale '+ cirrusscale() + '               \t 
#' +", "'    translation '+ cirrustranslation() + '      
#' +    // cloud placement", "'    children [\t                                 
#';", '', '', 'CloudStringB = new Array();', 'CloudStringF = new Array();', '', '   \tfor (var j=0; j < maxj; j++)', '   \t{', '', '\tradius = 0;', '', "\tCloudStringB[j]= '  Transform {\t\t    \t      
#' +", "\t'    translation '+ cirrussectiontranslation() + '    
#' +     // section placement", "\t'    children [\t                                      
#';", '', '\t', '\tCloudStringC = new Array();', '', '      \t\tfor (var k=1; k < maxk; k++)  // maxk value denotes how many textured billboards make up the cloud ', '      \t\t{', '', '', '\t\trandomtheta = 6.28319*Math.random();', '\t\trandomphi = 1.57079*Math.random();', '\t\tradius = radius+(sectionradius/maxk); // radius incremental steps based on section radius and max billboards', '', '\t\tX = radius*Math.cos(randomtheta)*Math.sin(randomphi);', '\t\tZ = radius*Math.sin(randomtheta)*Math.sin(randomphi);', '\t\tY = radius*Math.cos(randomphi);', '\t\t', "\t\tBillboardtranslation = new String(X+' '+Y+' '+Z);", '', "\t\tCloudStringC[k] = '\tTransform {\t\t                
#' +", "\t\t'            translation '+ Billboardtranslation   + '          
#' +     // random billboard placement within radius designated above", "\t\t'\t  children [\t                                        
#' +", "\t\t'\t      Billboard {\t                                
#' +", "\t\t'\t        axisOfRotation 0 0 0\t                        
#' +     // 0 0 0 designates rotation on all axis", "\t\t'\t        children [\t                                
#' +", "\t\t'\t            Transform {\t                \t\t
#' +", "\t\t'\t              rotation '  + rotation() + '\t        
#' +", "\t\t'\t              children [\t                        
#' +", "\t\t'\t                  Shape {\t                        
#' +", "\t\t'\t                    appearance Appearance {\t        
#' +", "\t\t'\t\t\t    material Material {\t\t\t
#' +", "\t\t'\t\t\t    }\t\t\t\t\t
#' +", " \t\t'\t                      texture ImageTexture {\t        
#' +", '\t\t\'\t                        url ["cloudtexture3.png" "https://savage.nps.edu/Savage/Environment/cloudtexture1_4.png" ] 
#\' +', "\t\t'\t                      }\t                                
#' +", "\t\t'\t                    }\t                                
#' +", "\t\t'\t                    geometry IndexedFaceSet {\t        
#' +     // define type of geometry to texture", "\t\t'\t                      coordIndex [ 0, 1, 2, 3 ]\t        
#' +", "\t\t'\t\t\t      solid FALSE\t\t        
#' +", "\t\t'\t                      coord Coordinate {\t        
#' +", "\t\t'\t                        point [ 500 500 0,\t        
#' +     // define size of the geometry. Here 100 meter 2D square.", "\t\t'\t                                500 -500 0,\t        
#' +", "\t\t'\t                               -500 -500 0,\t        
#' +", "\t\t'\t                               -500 500 0 ]\t        
#' +", "\t\t'\t                      }\t                                
#' +", "\t\t'\t                    }\t                                
#' +", "\t\t'\t                  }\t                                
#' +", "\t\t'\t              ]\t                                        
#' +", "\t\t'\t            }\t                                        
#' +", "\t\t'\t       ]\t                                        
#' +", "\t\t'\t   }\t                                                
#' +", "\t\t'      ]\t                                                
#' +", "\t\t'     }\t                                                        
#';      ", '\t\t', '', '\t\t}', '', "\tCloudStringD = CloudStringC.join(' ');", '', "\tCloudStringE = '   ]\t                 
#' +", "\t'\t}\t                         
#';", '', '\tCloudStringF[j] = CloudStringB[j] + CloudStringD +CloudStringE;', '', '', '\t}', '', "CloudStringG = CloudStringF.join(' ');", '', "CloudStringH = '      ]\t                                        
#' +", "'     }\t                                                        
#' +", "'#########################################################      
#';", '', 'CloudString = CloudStringA + CloudStringG + CloudStringH;', '', '', '', 'newNode = Browser.createVrmlFromString(CloudString);', 'Cirrus.children[i] = newNode[0];', '', '  }', '', '}', '', '', 'function initialize()', '', '{', '', 'cumulus();', '', 'cirrus();', '}', '', '']
),
DirectionalLight(ambientIntensity=1, color=((1,0,0)), direction=((-1,-1,0)), global_=True)]),]))
.XML())
