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
        texture=ImageTexture(url=['../../images/4/bosphorus7-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,28.585863182492176,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[2,2,0,1,15,84,112,112,144,167,181,188,182,162,151,157,160,162,152,147,139,135,0,6,2,0,16,71,118,114,129,147,183,188,185,168,150,170,164,168,159,151,141,140,0,3,0,2,1,49,91,102,97,126,159,192,193,180,160,178,171,174,158,156,143,141,-1,-1,-2,-6,0,31,46,62,94,124,160,192,198,189,174,184,176,174,169,153,145,148,-8,-12,-8,-7,5,18,41,63,100,125,156,197,196,193,186,189,182,180,171,161,149,149,-4,-5,-6,3,7,43,63,80,105,138,162,200,193,188,194,195,186,178,174,162,157,149,0,1,5,8,16,39,60,94,135,160,181,201,196,192,197,194,191,177,170,160,136,129,2,6,7,12,18,26,38,64,95,121,164,199,197,198,202,197,184,179,170,151,122,117,5,6,13,38,48,57,66,80,90,122,166,195,194,194,197,195,174,169,162,123,104,97,7,13,38,66,88,98,101,110,139,169,186,192,190,186,191,173,164,128,121,97,101,90,22,31,40,76,98,91,103,136,164,174,191,190,184,164,179,149,136,111,86,76,89,86,6,19,27,52,69,66,86,119,136,139,196,179,169,145,145,128,100,88,91,74,63,59,4,6,12,33,41,44,68,86,90,120,180,178,180,155,124,109,117,113,129,104,77,71,2,6,12,19,25,36,46,64,101,140,193,191,187,165,152,124,134,140,132,104,71,63,7,5,12,19,28,56,81,92,137,158,173,198,188,176,165,146,159,154,123,93,66,60,3,5,25,21,28,52,78,99,144,138,152,196,189,176,168,176,178,149,124,85,64,59,0,6,26,27,30,37,51,85,119,109,140,192,191,186,177,169,168,152,117,89,60,64,1,6,25,40,30,49,54,58,82,103,136,175,190,191,175,150,154,152,125,95,65,68,1,3,34,45,36,52,71,89,82,88,130,171,183,183,177,153,132,147,123,105,66,71,0,8,34,54,46,50,68,93,125,116,144,176,178,175,171,160,115,124,109,111,68,79,1,15,33,58,63,58,64,87,120,145,149,177,181,153,166,154,132,97,94,76,80,89,4,8,21,49,70,73,90,85,100,139,162,182,181,163,141,126,115,106,115,80,92,98,6,10,14,31,58,78,97,113,112,119,158,185,182,161,125,116,134,129,115,80,103,108,6,10,15,30,56,76,95,114,117,120,159,186,179,160,126,121,139,128,112,81,104,110],
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
