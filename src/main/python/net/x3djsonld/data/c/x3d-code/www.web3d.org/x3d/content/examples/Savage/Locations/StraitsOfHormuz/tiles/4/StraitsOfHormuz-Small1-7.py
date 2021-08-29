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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small1-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.56099515838445,56.180963250426785,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[208,136,106,85,74,67,64,61,58,64,75,122,185,148,211,271,149,109,105,191,217,150,506,319,147,94,74,66,60,51,51,50,50,86,137,110,153,160,126,137,177,181,204,120,536,317,197,101,75,62,54,50,47,44,41,46,130,182,92,95,193,168,301,315,425,239,409,159,339,241,111,62,52,45,44,39,35,38,50,139,169,70,79,138,141,148,274,163,536,213,542,367,270,55,51,44,40,33,29,30,40,74,256,72,102,78,69,65,191,215,429,304,522,444,282,85,43,38,34,28,26,22,27,38,134,141,47,73,39,51,102,158,653,451,556,657,234,135,37,33,28,24,24,20,17,18,32,105,39,30,37,25,33,126,832,581,482,764,362,131,44,27,26,28,22,15,15,9,13,28,48,19,15,15,10,36,876,597,518,798,479,218,70,31,19,17,15,16,9,8,8,4,9,15,12,4,2,1,851,739,688,613,307,156,140,26,19,15,16,12,10,8,4,3,1,4,1,2,0,2,757,865,916,624,593,515,290,56,15,9,7,9,12,6,4,2,1,-1,0,0,3,0,589,598,952,775,667,539,237,94,18,7,8,10,7,4,4,0,-1,2,1,0,0,0,387,499,819,671,699,458,321,324,108,6,5,5,3,4,3,0,2,0,-3,0,0,0,488,618,735,542,515,481,518,331,123,6,6,3,2,3,0,2,0,1,1,4,0,1,631,662,742,363,439,436,475,299,174,14,3,1,2,6,-5,0,1,0,0,0,1,1,567,605,749,495,259,459,435,411,181,83,8,3,2,0,2,0,0,3,1,2,2,1,748,635,674,606,223,453,181,214,191,17,12,6,4,0,0,0,0,1,1,4,1,0,863,632,631,687,275,108,170,63,33,19,16,9,3,4,0,1,0,2,3,1,0,1,939,680,681,591,553,176,57,48,31,26,15,16,5,2,1,0,0,0,0,1,3,1,1037,800,663,574,309,351,92,42,198,25,17,162,3,-1,6,1,0,3,0,3,1,2,1095,1069,735,551,222,351,112,183,45,74,11,3,0,0,0,4,0,8,3,6,-1,0,980,1116,952,686,337,112,70,230,153,55,157,101,-3,0,0,-2,0,6,1,3,0,1,987,1124,976,691,318,103,75,252,155,53,144,125,-2,0,2,1,3,4,-1,1,0,3],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
