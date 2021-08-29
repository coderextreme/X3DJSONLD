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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small13-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.906134432197852,55.42775814790765,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[17,15,13,11,12,8,5,6,2,4,5,4,4,3,3,3,4,4,4,3,4,4,23,20,16,12,10,11,6,4,5,4,3,5,4,6,5,0,6,4,3,3,3,2,22,22,17,19,15,13,10,7,6,7,4,5,9,3,2,4,5,5,3,2,3,0,26,24,21,19,16,15,11,8,8,6,3,8,6,5,6,4,3,5,5,2,2,3,31,29,22,21,17,15,14,10,8,8,9,4,4,7,8,7,8,0,1,3,3,3,35,32,26,20,22,19,14,11,10,7,7,11,7,11,11,9,6,7,0,8,2,-1,39,32,30,28,23,19,15,9,11,10,13,14,15,17,16,15,10,11,5,4,3,-1,40,31,32,30,26,23,20,15,14,13,18,18,21,17,18,20,14,13,9,6,3,2,43,43,36,30,29,24,21,17,14,20,22,26,25,26,25,23,15,14,11,9,11,5,51,44,34,36,32,28,21,21,19,24,23,27,32,36,32,25,21,17,13,13,15,10,55,48,36,36,37,32,27,22,19,24,29,34,43,49,42,29,23,21,18,24,21,18,66,52,44,42,41,35,28,33,24,30,30,40,56,60,51,37,31,29,29,31,29,26,74,58,54,52,45,45,44,45,36,49,50,53,69,73,55,42,44,44,38,44,37,30,81,66,64,61,68,69,75,76,107,181,232,263,191,86,56,49,52,51,91,53,129,70,98,83,77,91,110,142,170,129,251,354,364,247,109,120,62,55,59,69,79,68,102,134,129,100,124,149,317,248,332,190,447,368,422,195,122,152,69,60,61,82,82,84,83,103,120,139,180,309,317,372,426,344,401,440,278,149,155,212,101,85,121,133,109,100,104,97,293,359,301,404,417,379,505,578,517,438,206,161,228,240,139,146,156,119,186,145,119,116,479,550,666,564,588,597,574,785,716,363,222,256,334,244,163,186,167,184,136,178,148,141,548,645,760,671,671,730,756,855,461,291,262,370,223,350,286,294,289,165,197,252,167,177,508,517,533,536,643,684,774,555,373,313,409,245,370,334,257,320,311,202,306,337,207,197,579,519,516,652,821,830,529,500,376,412,286,349,395,320,265,346,251,228,260,272,286,270,550,538,527,663,846,798,523,490,381,389,295,388,389,324,272,340,252,230,260,270,279,271],
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
