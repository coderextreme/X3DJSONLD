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
        texture=ImageTexture(url=['../../images/4/bosphorus10-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[125,89,92,143,172,129,126,141,149,199,175,186,180,184,204,154,106,132,159,165,86,84,128,85,114,146,156,107,149,159,175,193,171,143,157,194,176,130,136,86,176,160,96,78,131,136,96,132,145,116,173,194,177,150,169,130,166,139,153,119,97,75,79,95,105,80,99,135,114,155,165,130,150,178,164,144,150,140,140,105,142,160,131,60,121,75,54,58,88,111,151,163,156,161,177,163,148,151,119,93,147,155,90,106,60,81,165,157,108,89,83,142,147,160,179,164,152,140,138,113,125,143,92,97,61,71,90,136,135,172,161,156,130,104,129,149,162,139,149,148,101,102,101,90,70,60,100,101,136,84,143,163,157,161,140,121,145,154,144,128,131,128,112,91,70,64,64,108,149,191,147,119,138,168,139,134,124,133,147,168,155,147,97,117,98,101,70,75,95,141,175,179,131,117,169,139,123,121,115,153,163,147,139,133,103,87,97,89,71,80,121,152,174,145,105,144,160,146,100,92,119,164,140,124,132,112,97,86,77,93,63,89,115,152,168,128,147,145,155,112,93,87,134,149,141,129,104,109,110,89,76,66,65,99,117,127,143,153,160,137,124,122,98,104,154,133,118,132,127,95,87,74,66,64,69,96,97,112,140,178,158,127,109,104,147,147,145,137,105,99,109,99,76,78,68,63,66,69,91,114,149,175,163,121,114,119,147,155,129,124,127,106,98,94,93,82,64,68,73,70,86,121,135,154,149,124,135,137,137,137,140,143,117,102,97,87,73,64,68,72,84,72,80,123,112,135,162,129,143,121,120,123,143,124,108,91,85,70,63,70,75,78,87,85,76,89,100,112,153,154,155,124,124,120,121,106,94,83,71,65,67,73,77,87,98,100,73,109,115,123,141,158,130,129,120,122,127,103,87,71,67,70,69,75,87,96,118,100,76,104,110,125,128,150,136,121,127,123,111,101,81,67,69,82,69,72,82,101,120,92,78,93,101,105,112,142,133,136,153,148,84,87,71,70,71,81,71,74,81,105,102,85,81,91,114,106,100,150,131,142,128,122,90,71,69,73,77,80,72,74,95,111,102,106,94,94,122,116,131,152,147,163,140,133,74,70,74,81,79,80,74,75,98,120,113,117,114,92,110,110,124,157,164,159,156,161,73,70,75,83,79,80,74,74,99,120,111,116,117,93,109,106,118,155,162,161,158,162],
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
