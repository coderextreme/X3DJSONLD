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
        texture=ImageTexture(url=['../../images/4/bosphorus8-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.253497503706967,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[151,143,149,137,161,159,173,132,173,181,172,205,224,236,225,177,188,156,170,163,104,104,176,173,158,133,151,154,160,135,151,159,177,210,203,209,217,189,153,142,127,129,111,92,187,180,168,167,127,140,134,162,188,196,191,210,184,188,199,186,195,173,135,99,101,110,199,210,185,153,133,127,121,160,195,224,206,192,193,169,191,205,186,170,150,137,80,58,215,200,192,174,159,109,121,154,183,221,188,168,180,161,186,200,187,160,144,129,78,68,212,197,171,148,156,111,111,152,179,211,201,178,153,151,176,180,184,151,140,126,91,82,217,214,194,166,114,114,145,176,183,211,203,178,134,150,156,149,168,143,136,136,89,82,210,190,193,170,133,99,119,178,185,177,170,184,141,125,117,148,158,119,118,94,64,60,209,187,162,164,170,148,95,142,156,162,163,180,152,128,98,121,143,133,108,109,93,85,193,189,189,146,164,136,119,108,127,113,141,167,157,125,96,87,119,149,113,144,127,116,185,159,172,148,166,160,147,89,80,123,127,146,149,117,89,65,128,130,88,116,81,69,176,167,140,121,170,183,173,140,72,136,147,154,155,134,103,61,82,114,83,71,55,53,153,168,138,137,158,175,172,110,68,115,118,142,149,101,84,60,43,53,45,37,38,35,135,154,129,125,120,140,160,130,61,83,130,153,146,125,104,70,59,48,27,22,18,16,127,121,127,79,100,110,147,130,73,81,101,114,128,101,88,78,76,38,32,20,14,15,105,117,112,78,62,101,107,99,54,50,70,86,115,92,57,46,48,44,31,15,15,15,88,120,79,74,48,74,74,65,61,43,84,106,65,57,39,19,30,38,13,14,15,13,69,107,91,76,56,47,49,48,40,36,79,72,37,54,49,22,13,28,14,13,13,13,82,70,84,89,74,48,36,39,33,40,52,63,28,28,19,10,11,11,12,14,13,12,78,63,80,94,100,68,54,39,23,37,50,63,32,16,10,12,11,14,13,15,20,22,60,72,108,106,111,100,67,51,44,54,56,70,45,12,12,11,11,13,15,21,40,53,72,92,113,92,83,79,54,49,37,38,60,59,25,11,11,11,11,14,21,67,107,117,76,88,100,80,68,65,60,50,29,31,44,35,13,11,10,12,15,18,59,110,146,148,74,77,98,79,68,61,59,55,36,31,39,32,11,11,10,12,15,19,72,114,146,146],
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
