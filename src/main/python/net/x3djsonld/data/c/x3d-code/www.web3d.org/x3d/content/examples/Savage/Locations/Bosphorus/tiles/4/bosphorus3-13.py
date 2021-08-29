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
        texture=ImageTexture(url=['../../images/4/bosphorus3-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.788909617338845,29.401860686199143,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[52,62,66,74,83,95,108,136,121,125,109,140,158,168,178,179,181,177,183,168,138,135,55,65,71,81,89,113,145,151,154,132,156,149,149,166,172,174,175,178,188,176,160,151,60,67,82,94,113,128,159,165,168,152,165,167,161,159,165,168,178,173,183,178,161,157,63,78,84,118,130,155,168,179,199,178,173,170,171,163,167,169,173,170,178,172,163,161,56,70,95,98,143,161,174,175,188,190,190,183,178,173,173,173,167,165,174,171,181,179,63,66,73,109,95,126,155,172,168,188,193,188,187,182,178,176,174,167,163,169,182,180,80,95,93,125,139,125,137,127,156,178,189,187,188,185,188,189,181,176,163,167,183,180,110,142,130,135,162,153,153,145,150,168,185,179,183,186,187,196,187,175,161,163,176,174,117,155,175,193,179,154,170,148,152,160,176,177,182,183,195,204,193,180,162,154,161,162,92,128,155,234,206,167,176,161,168,170,171,172,177,177,190,192,194,176,164,158,153,152,83,111,156,222,233,201,174,170,178,175,170,158,170,174,175,184,192,174,169,166,157,157,108,130,161,190,216,201,183,180,173,169,165,161,153,169,156,178,176,178,183,180,170,168,89,114,146,171,191,188,189,213,189,181,173,160,155,151,143,160,171,173,188,189,186,184,97,118,142,159,176,198,207,259,220,188,172,159,161,165,157,134,169,163,168,195,198,193,116,132,134,155,173,197,223,288,244,203,177,162,168,169,166,154,132,155,159,194,198,193,123,130,158,182,188,199,214,281,261,212,181,168,170,182,172,170,138,130,157,180,206,206,136,154,166,178,201,198,210,233,259,229,183,176,184,186,177,158,141,128,158,176,204,213,135,145,156,167,186,198,200,208,221,208,177,167,186,173,164,162,141,117,140,175,186,187,128,134,142,157,182,207,190,196,192,176,175,181,158,151,144,133,132,132,118,156,173,177,124,134,142,162,180,201,194,185,185,186,202,217,181,170,159,144,148,149,143,111,141,143,131,152,158,172,174,196,201,197,200,204,246,225,193,172,173,163,154,156,152,110,111,103,143,152,166,154,162,178,192,209,215,223,232,217,201,192,182,171,162,158,137,129,131,113,143,145,148,139,170,178,194,221,230,240,237,219,201,182,168,170,162,130,126,149,132,119,142,141,145,139,168,182,193,221,234,243,238,220,201,183,166,164,156,133,128,151,133,121],
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
