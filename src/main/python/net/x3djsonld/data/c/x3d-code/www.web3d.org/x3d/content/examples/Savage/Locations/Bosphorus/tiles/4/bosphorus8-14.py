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
        texture=ImageTexture(url=['../../images/4/bosphorus8-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.47604227744523,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[121,148,149,166,170,145,184,191,179,195,225,202,210,206,202,199,190,196,212,198,230,239,140,163,160,142,132,128,140,165,159,201,204,195,190,218,220,208,195,211,205,224,231,236,135,173,127,124,137,135,131,136,160,173,177,178,187,194,209,210,216,233,224,226,229,232,111,150,120,138,159,166,162,137,152,154,157,156,176,166,194,186,206,197,194,212,236,241,124,114,132,157,159,172,164,165,173,184,195,192,168,179,187,173,176,192,205,205,234,235,138,132,117,147,180,181,176,171,189,200,207,202,173,183,207,185,190,215,224,232,225,227,163,134,139,123,146,153,156,148,178,160,182,190,184,199,205,191,229,250,249,249,251,254,174,151,155,150,161,166,168,150,155,188,204,205,212,191,172,194,215,224,224,242,233,229,165,161,168,164,170,216,181,161,162,173,195,192,204,183,150,180,174,179,191,228,207,198,141,172,173,172,172,203,172,172,164,168,196,171,189,200,157,152,150,177,222,246,238,237,160,149,181,195,202,209,176,206,176,167,167,174,210,174,147,136,149,176,195,224,184,194,184,155,165,181,210,216,187,199,177,188,189,180,201,191,167,132,173,201,203,171,182,195,193,179,188,196,205,207,213,195,189,194,203,193,205,177,151,131,189,199,181,182,186,205,174,186,186,191,210,219,195,187,156,170,169,163,176,170,159,144,127,136,165,165,131,146,162,190,167,188,217,228,181,160,136,167,175,170,151,182,185,151,143,124,132,136,104,115,189,193,158,193,208,219,192,175,148,144,148,175,151,181,221,184,174,139,128,109,100,93,190,171,163,174,186,206,189,170,151,123,148,151,160,168,235,200,195,165,169,167,127,105,158,146,178,202,212,210,192,194,143,130,169,133,160,146,193,208,158,172,161,163,84,72,165,169,189,209,221,225,188,168,175,164,122,128,160,146,163,162,139,164,146,136,73,70,189,191,192,171,177,198,208,248,189,147,122,169,152,116,145,130,150,121,109,138,130,111,175,169,154,145,169,204,238,189,156,139,123,174,124,121,118,113,164,144,83,135,158,160,171,151,126,161,175,185,195,164,109,93,149,164,147,96,81,123,149,144,93,136,139,153,157,136,113,152,173,170,172,166,91,139,173,170,133,136,78,106,131,169,134,59,146,143,156,133,113,145,173,166,169,164,82,139,171,168,135,134,74,108,128,168,136,55,145,138],
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
