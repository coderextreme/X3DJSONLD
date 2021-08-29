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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small10-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.569849613744502,57.084809373449744,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[6,8,5,8,14,21,24,34,54,76,108,184,229,239,155,81,78,77,95,111,157,135,0,6,9,9,14,19,25,34,51,78,144,157,215,134,97,84,81,86,113,162,146,139,7,9,12,14,16,19,26,46,87,88,228,221,238,117,93,85,90,88,115,266,204,157,4,8,10,17,17,20,27,33,46,157,155,207,153,107,93,101,101,102,225,157,181,154,4,10,9,15,20,20,30,36,38,106,201,255,137,107,100,113,116,132,197,177,167,189,4,9,11,12,18,26,40,63,103,113,315,166,115,96,114,123,143,254,112,203,208,201,3,8,9,14,18,27,51,69,59,201,279,133,104,101,118,134,187,269,138,158,169,194,4,4,6,12,18,27,73,161,95,297,188,96,86,98,118,136,216,162,117,177,162,183,1,7,10,12,17,28,70,120,192,265,111,87,94,101,117,152,187,142,131,145,155,233,2,9,9,14,17,56,37,77,226,118,83,78,79,95,110,165,251,193,132,133,236,166,4,8,15,18,19,24,52,60,109,78,62,84,82,85,108,145,173,195,157,146,209,306,6,17,18,22,45,23,34,39,45,53,58,67,71,82,101,244,179,255,158,189,346,297,6,21,20,28,91,80,56,66,47,52,60,61,75,84,161,240,209,219,159,204,254,223,10,8,18,38,83,65,83,86,63,50,54,66,71,83,174,250,219,210,177,214,248,223,8,8,20,71,73,101,110,82,60,58,59,64,76,91,175,279,268,227,235,331,226,220,7,15,22,64,127,135,109,94,58,63,66,64,73,123,286,263,286,216,295,265,219,221,20,18,28,68,96,134,105,74,65,71,74,74,80,138,300,219,224,210,252,266,230,228,13,21,58,78,91,142,99,79,72,74,75,77,90,227,228,229,194,233,344,256,225,232,8,17,41,78,123,122,89,85,92,83,87,90,126,269,182,257,186,236,319,254,234,243,13,20,63,70,154,110,84,87,87,87,102,96,187,324,166,209,172,208,278,241,253,261,10,28,73,106,142,86,75,78,102,111,102,121,176,244,166,162,222,303,294,257,250,251,32,46,64,98,135,75,69,89,89,117,125,152,168,186,195,182,261,337,313,253,264,264,32,56,66,98,138,76,68,91,89,115,125,153,175,179,217,181,254,342,315,255,261,263],
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
