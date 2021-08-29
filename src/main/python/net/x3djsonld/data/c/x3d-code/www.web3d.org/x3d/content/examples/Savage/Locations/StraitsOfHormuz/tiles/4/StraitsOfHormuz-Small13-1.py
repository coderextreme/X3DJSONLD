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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small13-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.906134432197852,55.27711712740383,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[35,34,34,31,32,29,27,26,29,27,28,27,22,26,23,25,23,21,24,24,19,17,41,40,37,34,32,30,30,32,32,33,28,28,25,26,28,23,28,26,25,25,24,23,42,41,38,38,38,35,36,38,37,33,31,31,27,30,28,26,34,31,30,28,25,22,48,45,45,42,44,43,44,43,43,38,36,37,34,34,30,33,33,35,33,32,27,26,53,50,49,50,51,52,48,49,47,42,46,42,41,38,37,37,37,34,36,36,32,31,53,54,54,52,57,57,50,55,51,52,51,50,48,44,45,43,44,43,40,40,36,35,53,63,61,64,67,67,60,62,60,60,61,61,54,54,48,49,51,47,43,41,38,39,57,57,69,71,74,72,73,65,68,67,69,65,61,60,55,57,55,54,50,49,41,40,63,62,72,78,80,79,70,76,73,64,76,77,67,71,64,63,62,61,55,53,49,43,67,69,81,80,87,73,79,84,74,70,84,86,79,78,73,70,70,68,68,62,56,51,74,69,76,91,94,79,88,89,94,96,95,91,84,82,83,82,81,81,76,71,63,55,75,72,71,96,102,86,78,98,111,94,106,106,100,95,97,93,95,96,90,84,73,66,78,70,74,80,115,105,89,106,112,109,118,115,107,104,107,109,105,113,109,100,86,74,79,88,95,92,123,124,109,105,114,122,130,128,118,127,126,122,124,130,126,114,98,81,90,86,97,110,121,136,123,129,116,109,138,145,147,156,140,141,141,149,144,128,103,98,98,101,119,126,138,124,126,116,115,144,153,157,167,176,168,146,158,170,164,162,135,129,114,115,127,150,168,129,128,139,131,144,162,173,207,230,169,163,173,185,186,192,147,120,155,116,141,193,210,143,138,153,151,151,192,197,231,261,205,177,207,213,205,169,258,293,128,146,147,139,140,145,154,169,156,172,217,207,217,255,214,189,241,244,272,321,428,479,123,166,152,167,158,159,181,162,173,183,194,223,214,255,302,230,255,280,323,392,456,548,122,155,200,172,169,155,190,178,249,231,211,235,234,250,259,295,279,313,296,396,461,508,140,160,228,199,251,166,191,180,260,257,199,205,276,277,293,336,369,339,300,361,462,579,149,166,224,202,263,170,193,180,260,261,198,209,269,281,293,345,390,341,303,377,459,550],
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
