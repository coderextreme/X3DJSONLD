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
        texture=ImageTexture(url=['../../images/4/bosphorus10-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[99,118,98,86,74,42,19,-1,0,-2,4,0,4,37,61,129,142,143,166,132,60,57,162,169,160,133,135,122,71,45,9,0,0,0,1,3,11,61,118,153,162,144,131,120,222,216,222,191,201,167,112,49,7,5,3,3,0,6,0,0,42,96,175,169,180,170,193,130,144,147,120,89,30,12,19,16,6,0,0,-2,0,4,-8,69,159,185,190,194,144,83,71,47,49,40,20,16,28,61,49,50,4,-2,1,2,0,16,98,99,175,183,159,80,140,82,90,67,52,45,69,71,116,112,69,-1,0,1,0,15,42,61,102,109,113,108,148,107,137,121,84,54,113,117,113,73,100,5,1,1,0,41,74,117,119,119,117,171,143,144,158,125,87,86,81,69,55,18,27,5,2,-1,0,0,0,1,13,34,157,206,136,206,187,127,125,126,81,45,40,99,19,17,0,-3,1,1,1,1,1,1,205,220,152,195,223,179,133,81,72,131,125,112,35,78,9,-1,0,4,2,2,-1,-5,179,227,176,221,217,205,156,120,127,179,169,58,94,130,33,0,1,0,0,-2,-2,0,198,222,206,207,174,168,160,167,175,195,149,74,150,160,52,45,3,-2,0,-4,0,-2,175,184,216,217,168,132,141,153,191,157,84,145,204,206,155,68,21,2,0,0,-1,-1,136,153,187,204,163,110,134,122,166,209,126,220,226,219,174,83,97,8,0,1,0,1,128,123,172,175,134,124,103,132,153,183,207,227,221,192,185,152,165,18,0,0,-1,0,100,107,157,181,140,103,136,96,114,173,215,204,181,157,160,175,177,105,9,0,0,0,85,122,136,143,141,98,93,119,162,184,201,169,170,160,150,163,161,133,83,14,-2,-3,84,104,106,123,142,108,80,104,127,186,170,133,172,157,133,166,137,143,90,51,10,8,60,78,75,105,148,114,90,75,140,133,159,120,168,166,111,162,129,136,125,99,68,72,56,48,69,94,138,128,121,60,114,129,155,124,148,151,138,127,147,110,126,117,97,96,74,46,76,110,135,118,100,66,88,122,130,142,135,133,107,108,144,122,108,109,96,91,96,45,65,89,108,129,131,98,78,115,105,139,98,127,143,89,132,120,93,97,90,84,82,47,38,76,80,130,115,73,105,94,98,135,112,113,129,85,113,107,99,61,62,62,79,49,37,75,76,132,115,75,106,93,94,134,110,113,126,87,109,107,102,66,53,52],
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
