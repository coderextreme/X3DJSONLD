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
        texture=ImageTexture(url=['../../images/4/bosphorus8-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.401860686199143,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[127,155,139,113,129,144,168,195,201,209,207,200,157,143,165,181,180,116,131,134,124,121,121,155,171,165,171,171,185,182,192,212,195,171,173,184,176,171,159,112,121,147,145,140,157,165,157,164,182,194,197,214,226,218,193,190,195,190,174,156,131,137,135,142,133,135,160,171,146,156,167,168,169,206,228,222,204,196,176,176,146,159,154,146,145,129,110,111,165,172,146,140,142,154,186,182,211,204,207,197,163,143,129,155,140,110,104,129,121,124,175,142,120,156,172,180,197,223,218,187,171,187,164,125,118,117,126,105,111,114,132,138,178,124,153,154,155,179,201,203,227,208,181,167,155,128,107,99,110,117,134,149,161,163,134,103,120,134,164,163,184,176,196,229,160,177,162,100,102,133,119,158,176,142,176,174,77,150,167,162,195,203,178,152,217,186,115,112,119,110,138,164,151,158,176,140,156,165,102,182,189,190,169,182,161,177,171,128,89,97,122,111,168,175,181,185,216,179,143,141,117,139,151,170,130,131,152,124,93,103,123,103,149,124,135,171,184,201,178,162,154,160,111,79,100,112,85,86,96,90,136,136,133,124,132,139,128,157,178,205,185,165,178,184,161,152,103,118,117,146,114,92,140,191,150,166,160,162,130,147,187,185,169,179,195,193,164,127,131,133,108,152,141,112,137,185,166,180,181,183,162,155,195,168,157,162,180,174,146,147,150,171,106,144,135,118,122,151,151,183,182,155,184,184,188,160,136,175,159,162,177,182,174,153,110,119,147,125,126,126,139,168,149,131,153,163,154,157,129,145,179,189,180,172,158,131,147,128,147,152,144,148,157,139,135,115,140,136,144,157,146,179,190,190,154,178,149,129,132,142,157,160,171,171,138,124,117,108,121,119,129,112,122,140,161,158,185,178,174,155,152,150,140,116,139,129,141,123,123,110,101,104,119,139,146,163,164,165,184,159,176,181,171,171,137,105,119,107,148,119,136,135,106,109,140,169,174,184,187,189,155,153,164,179,150,142,117,105,95,126,152,113,100,118,141,103,141,158,157,159,169,175,156,177,155,160,128,117,137,119,90,114,128,132,100,97,122,103,134,129,160,140,160,171,152,172,169,160,129,103,136,125,91,92,102,121,105,84,127,124,107,137,156,130,143,157,151,171,166,161,130,103,135,130,94,87,98,121,101,81,124,126,99,136,151,130,142,156],
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
