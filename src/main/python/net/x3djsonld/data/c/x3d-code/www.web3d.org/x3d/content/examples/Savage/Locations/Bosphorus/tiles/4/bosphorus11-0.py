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
        texture=ImageTexture(url=['../../images/4/bosphorus11-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.22625451557576,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[87,112,174,95,52,56,60,54,58,62,70,72,68,58,60,53,41,32,23,19,33,34,85,118,156,68,59,64,67,60,64,68,70,72,66,55,48,45,38,31,23,20,30,35,76,112,121,57,62,69,69,69,70,75,78,79,72,64,57,46,37,30,25,20,30,34,68,79,89,63,75,73,75,78,81,85,94,106,107,76,63,56,46,36,25,23,29,33,71,65,65,76,84,86,90,101,103,100,114,144,136,102,82,74,55,41,25,24,33,37,75,80,86,87,96,121,100,120,139,118,123,136,137,120,125,115,69,47,25,28,38,40,83,94,100,105,150,147,119,111,141,129,133,135,150,161,155,121,70,45,27,28,38,41,89,98,119,154,190,159,136,130,130,137,144,137,161,187,145,98,75,43,27,30,44,46,109,109,141,208,197,173,158,141,130,145,171,146,157,172,135,89,69,50,30,44,39,39,136,155,182,198,196,199,184,147,138,157,188,157,172,143,81,83,53,39,31,43,56,52,179,189,194,205,222,232,199,151,145,163,180,163,146,93,77,61,48,38,31,48,69,68,193,204,196,233,244,232,195,157,148,159,193,198,148,100,78,60,49,37,35,52,72,75,212,226,231,244,240,232,192,156,146,157,194,156,110,102,79,65,55,36,36,48,70,78,225,230,240,245,219,227,194,156,139,151,165,130,163,123,94,72,56,40,36,47,66,75,209,209,219,228,225,193,180,155,131,127,136,204,203,152,108,72,56,41,37,39,53,58,180,189,209,215,189,177,162,141,146,162,190,211,191,154,99,73,54,40,45,49,43,43,203,212,232,230,235,202,183,157,160,173,169,152,163,157,103,71,53,40,55,63,59,55,221,220,222,203,246,224,177,164,158,145,128,134,111,129,92,67,52,43,62,79,84,79,213,193,195,167,197,205,147,132,139,124,105,117,95,100,89,63,48,50,67,101,103,95,184,156,184,156,147,163,131,104,115,117,88,103,85,88,80,65,48,55,73,103,101,90,135,163,177,147,119,131,113,93,97,108,86,91,76,77,67,55,47,60,82,117,98,86,128,162,154,160,119,102,103,83,83,103,79,79,67,64,54,51,59,67,75,111,114,101,111,136,127,139,138,110,87,77,71,81,68,60,57,56,54,61,72,99,80,105,135,128,105,131,124,133,138,113,88,76,71,74,65,59,58,56,56,62,74,102,85,103,137,132],
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
