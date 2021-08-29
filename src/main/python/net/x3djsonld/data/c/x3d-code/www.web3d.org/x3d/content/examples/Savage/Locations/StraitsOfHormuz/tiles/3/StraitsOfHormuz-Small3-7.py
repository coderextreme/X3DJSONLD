###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_37',geoSystem=['GDC'],position=(26.23356479529115,57.3860914144574,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.23356479529115,57.3860914144574,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small6-14.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small6-15.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small7-14.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small7-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small3-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.1214698558067,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[7,6,16,19,53,150,43,43,43,51,64,106,156,136,184,159,212,254,391,337,293,288,6,11,28,26,26,50,57,51,50,53,60,67,81,129,157,212,247,385,438,372,362,366,3,12,17,31,231,43,72,62,61,52,82,67,128,112,129,174,260,509,489,357,316,296,2,8,28,79,101,55,59,57,65,57,74,78,95,180,158,197,307,348,411,427,316,304,1,5,14,127,122,65,64,54,62,61,68,84,187,174,181,209,278,451,394,494,342,332,3,6,27,186,106,79,76,66,69,67,75,92,167,191,184,235,288,339,401,430,364,352,1,9,49,219,114,86,75,70,76,103,84,100,157,208,195,372,385,306,417,459,358,361,2,8,40,412,122,98,74,77,78,85,89,107,146,220,224,278,270,360,389,469,409,421,7,11,104,185,105,83,77,80,80,85,97,104,140,214,213,243,301,366,497,457,499,491,8,12,36,74,70,74,67,70,84,93,111,116,139,219,196,260,366,461,577,600,759,838,10,17,53,58,51,57,75,66,90,101,130,152,144,187,178,289,337,595,477,676,1119,1118,11,31,65,35,42,48,63,76,128,136,145,158,171,196,196,322,414,424,538,721,647,633,11,30,98,40,79,51,63,106,116,152,170,176,172,205,262,314,349,402,512,497,520,520,12,26,146,59,72,69,97,85,103,108,104,126,135,205,356,309,363,660,436,480,613,629,13,27,92,93,78,66,77,100,90,101,113,134,158,203,366,303,346,347,509,675,702,738,14,72,73,83,64,62,73,96,78,81,115,119,154,230,358,275,329,465,530,638,766,782,13,89,105,76,57,56,82,72,82,107,96,103,235,181,326,261,374,384,482,588,851,821,16,34,103,61,51,51,66,67,81,90,85,123,195,188,288,316,320,492,628,668,830,817,18,41,109,47,45,58,74,56,95,67,108,114,161,193,302,425,360,748,668,850,1002,1036,15,27,87,40,38,43,47,78,57,83,119,109,163,245,262,404,449,774,863,799,1011,1026,22,39,32,32,35,43,74,46,63,76,103,133,159,309,279,506,507,691,917,1086,952,922,22,39,32,32,36,43,75,46,63,80,103,135,161,317,280,512,499,709,923,1089,959,932],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
