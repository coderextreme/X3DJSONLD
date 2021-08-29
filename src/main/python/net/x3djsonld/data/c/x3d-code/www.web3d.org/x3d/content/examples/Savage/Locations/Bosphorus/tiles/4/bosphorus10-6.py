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
        texture=ImageTexture(url=['../../images/4/bosphorus10-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,28.882589547476528,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[84,79,84,62,63,70,39,27,35,62,52,71,98,82,76,43,78,84,92,90,94,100,90,88,75,63,68,74,41,29,48,71,79,66,90,96,72,48,79,53,75,103,63,64,101,86,51,44,79,56,36,30,58,89,98,96,98,89,89,66,60,72,67,63,78,74,94,62,33,33,53,34,33,36,39,71,76,99,99,86,77,82,76,91,107,73,96,95,60,33,33,34,34,36,42,52,34,62,76,91,102,92,75,99,94,105,104,109,95,82,36,34,38,37,38,44,49,63,41,38,64,75,94,101,90,87,106,107,129,146,96,89,36,39,44,41,51,54,54,72,60,41,52,83,90,110,100,86,114,97,127,133,115,107,35,44,50,43,59,65,64,75,75,44,48,89,110,116,95,94,117,124,140,121,102,107,37,56,60,47,69,66,67,83,82,47,48,67,86,98,109,81,113,129,143,115,126,131,39,69,66,55,79,79,75,100,76,46,73,75,71,88,113,99,91,122,144,133,139,134,64,73,65,74,61,89,88,97,93,63,68,91,94,97,131,115,95,114,128,146,129,127,85,94,77,97,57,97,100,99,97,79,48,81,97,103,123,121,109,97,121,146,122,120,93,86,87,106,64,95,107,118,108,81,50,68,102,84,116,139,132,105,119,132,112,108,99,105,95,105,80,73,90,119,107,79,58,60,79,75,87,105,133,116,118,138,121,119,72,114,118,119,94,77,107,120,112,68,85,65,82,96,102,105,135,126,127,157,154,149,62,95,119,109,88,76,101,109,96,71,99,72,71,91,115,131,131,152,161,181,168,165,58,92,102,132,114,85,113,119,96,77,108,71,91,78,89,128,144,147,165,176,160,159,60,87,83,112,121,97,127,104,93,89,109,78,113,94,83,111,143,158,164,170,177,175,59,89,87,96,127,119,132,107,77,101,120,84,114,119,123,111,150,178,155,179,187,184,64,77,103,111,131,121,97,101,77,101,125,89,111,150,121,120,105,141,170,171,174,168,62,88,107,119,143,109,99,100,87,120,130,98,109,131,156,154,132,121,153,169,182,181,66,75,85,86,113,139,119,89,96,115,123,145,97,146,155,171,173,138,144,154,184,188,72,91,80,97,113,143,113,97,114,118,139,141,123,110,136,153,164,142,147,179,194,194,73,96,85,92,114,143,109,99,113,121,139,129,128,110,129,155,168,148,151,174,196,194],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
