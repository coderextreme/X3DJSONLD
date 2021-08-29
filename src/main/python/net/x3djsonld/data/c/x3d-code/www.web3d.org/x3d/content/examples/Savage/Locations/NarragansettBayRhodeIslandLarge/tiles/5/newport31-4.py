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
        texture=ImageTexture(url=['../../images/5/newport31-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[178,188,193,187,180,179,178,173,176,163,158,156,150,150,154,152,155,159,167,171,178,179,179,189,194,191,188,189,185,174,164,157,153,151,150,151,151,152,156,162,166,170,174,175,180,188,193,195,194,193,186,174,165,161,155,150,150,151,151,154,158,161,164,166,173,173,180,187,191,194,190,185,178,172,168,161,152,150,150,150,155,158,158,158,160,165,169,170,179,185,190,192,192,189,180,176,174,165,152,150,151,153,157,159,159,160,164,165,168,169,181,184,186,189,192,191,183,179,176,168,156,150,159,170,167,161,161,167,174,168,169,169,177,179,182,186,191,188,183,181,177,162,156,153,158,169,182,176,176,179,174,172,171,171,167,171,177,180,181,180,178,179,176,160,152,150,152,162,167,168,184,179,181,179,181,182,160,160,164,168,168,168,166,168,169,158,153,150,151,155,159,170,175,176,180,184,184,184,161,161,160,159,159,159,159,161,159,152,149,149,151,154,154,170,171,167,172,178,178,177,162,162,163,162,164,162,158,151,148,148,148,152,152,151,152,159,162,157,164,171,172,173,163,162,164,167,171,167,157,150,151,153,146,147,151,154,154,161,156,154,162,169,169,170,163,161,162,169,167,163,153,148,146,146,144,145,152,156,152,156,155,155,158,161,165,166,168,162,161,162,159,156,154,147,146,148,144,140,149,152,151,156,155,154,155,157,161,161,171,164,161,159,157,155,153,146,145,147,144,137,145,144,146,157,158,155,154,155,156,156,166,163,161,159,157,159,152,144,142,142,139,139,139,136,142,153,160,156,154,154,154,154,166,163,161,159,157,156,152,144,141,139,139,138,138,139,144,148,155,154,153,152,151,151,168,167,166,162,158,155,149,145,144,144,140,139,139,141,142,143,146,151,150,149,146,146,169,166,166,163,161,157,151,146,145,142,138,140,136,136,138,141,148,148,146,144,145,146,172,167,166,165,163,157,150,147,144,142,141,131,133,135,141,139,143,145,142,140,147,147,174,170,172,170,163,156,155,148,145,140,135,140,131,135,132,135,136,138,139,141,142,143,178,170,171,169,163,163,160,153,148,137,138,134,134,130,127,130,132,135,136,141,143,143,177,177,175,167,165,166,162,156,147,143,137,134,134,131,129,129,128,131,139,142,144,144,178,178,175,169,167,166,161,156,145,142,137,135,133,133,129,129,128,131,139,142,143,143],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
