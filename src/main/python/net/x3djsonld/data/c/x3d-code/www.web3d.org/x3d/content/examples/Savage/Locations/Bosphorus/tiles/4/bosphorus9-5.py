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
        texture=ImageTexture(url=['../../images/4/bosphorus9-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,28.80840795623044,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[125,157,173,158,175,172,160,124,149,125,143,163,169,156,159,170,167,156,147,147,146,146,136,161,172,173,181,170,150,135,158,128,160,177,177,159,165,170,158,166,152,131,114,110,152,163,176,180,190,183,138,165,163,140,155,184,188,166,167,163,147,144,129,88,102,106,155,161,177,189,192,175,142,177,160,144,162,183,181,173,161,147,127,112,107,76,82,85,160,174,179,192,183,172,161,182,163,149,174,187,184,153,156,117,139,86,80,89,79,84,175,172,193,196,179,158,173,191,177,162,178,169,173,148,143,109,120,75,45,72,52,50,192,172,194,189,171,175,192,192,163,180,186,172,147,146,98,50,89,84,102,64,62,73,198,183,193,195,196,173,199,179,174,195,187,179,155,135,96,81,60,71,62,63,96,102,191,194,206,202,187,195,200,190,186,198,179,146,137,143,152,120,99,90,104,106,69,73,191,209,213,201,189,193,208,193,199,199,180,187,172,178,153,128,107,108,135,113,70,73,206,212,213,200,200,204,209,204,190,192,197,191,178,174,152,124,106,122,123,119,130,137,220,221,207,205,200,205,211,206,196,180,173,200,157,143,153,115,106,105,64,102,145,140,223,221,195,192,196,195,200,209,212,190,141,177,152,132,137,108,77,81,72,114,123,120,205,207,170,186,200,179,186,203,208,202,175,144,136,106,102,136,101,55,50,45,67,72,182,173,151,196,187,181,165,178,185,177,144,154,148,129,173,152,132,101,45,61,30,34,203,169,145,183,174,155,130,162,151,178,184,179,184,174,179,147,131,97,64,33,34,31,184,169,121,151,163,136,120,119,134,156,175,161,176,184,173,136,110,104,70,34,77,66,169,157,144,118,130,169,138,167,114,157,163,134,148,150,152,153,96,32,60,28,121,123,149,123,104,128,162,150,159,165,115,127,147,143,109,128,122,144,55,65,62,85,128,121,116,147,131,121,168,132,133,176,161,81,143,126,116,159,76,117,82,61,139,117,92,75,129,148,148,99,132,138,118,169,113,78,144,92,123,103,94,43,35,85,98,85,53,62,86,159,113,118,147,156,104,162,140,65,97,114,59,33,39,41,75,71,113,93,61,75,87,139,76,129,151,140,76,151,102,58,62,88,42,53,75,86,67,95,105,86,79,83,84,135,73,131,148,137,73,143,99,61,53,88,42,55,82,90,67,99,104,87,80,84],
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
