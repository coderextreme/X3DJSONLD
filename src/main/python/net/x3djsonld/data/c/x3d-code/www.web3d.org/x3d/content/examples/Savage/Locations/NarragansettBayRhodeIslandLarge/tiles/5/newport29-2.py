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
        texture=ImageTexture(url=['../../images/5/newport29-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[196,194,191,189,186,182,177,175,171,163,156,148,141,138,138,138,139,140,139,139,139,139,196,193,189,185,179,177,175,173,170,165,158,152,145,138,138,139,144,141,138,139,141,141,195,191,185,179,177,176,174,172,167,156,153,148,144,138,142,147,145,138,138,139,142,142,191,184,181,177,173,169,167,166,156,153,153,149,141,140,147,150,142,138,139,143,143,143,187,180,175,171,166,162,158,154,151,151,150,147,141,142,146,143,139,139,142,144,140,140,181,177,172,167,167,163,158,154,151,151,150,150,147,142,143,143,142,140,143,141,141,141,176,172,170,168,168,166,159,155,153,152,152,152,150,148,144,142,142,141,142,142,141,141,175,172,171,170,173,166,159,155,155,154,153,151,151,149,144,144,145,145,146,146,145,145,169,168,166,167,165,157,155,154,154,153,154,151,149,147,143,147,148,148,149,151,149,148,174,169,166,163,160,157,156,155,152,151,151,150,148,146,144,153,151,151,151,155,153,152,177,173,165,164,159,156,154,154,155,155,154,153,151,150,148,155,157,155,154,157,157,156,178,172,165,163,161,157,155,159,161,159,157,157,155,153,152,158,161,157,155,158,161,161,174,170,165,164,161,160,159,164,167,167,165,164,162,155,153,161,166,160,157,156,157,157,175,170,168,164,161,163,167,171,174,176,176,174,169,159,154,165,168,162,157,155,153,153,174,169,167,163,162,167,172,178,182,182,180,177,169,160,158,164,163,160,158,156,154,154,173,169,167,166,163,167,177,184,188,185,180,174,166,160,162,163,158,158,159,157,157,157,172,169,169,168,164,170,179,185,189,186,181,174,166,162,162,160,157,159,157,153,150,151,170,172,171,168,166,174,180,186,190,186,180,174,167,164,161,154,147,143,145,150,146,145,170,167,169,168,169,176,183,191,190,184,177,172,164,160,157,150,142,138,141,140,139,139,170,165,164,164,172,178,183,189,186,181,175,168,159,150,146,145,140,140,137,133,135,134,170,165,162,162,169,175,179,182,183,178,173,160,149,150,148,139,136,140,142,134,127,127,162,161,160,162,169,179,177,181,178,171,159,152,151,147,141,136,134,134,132,130,125,124,163,161,161,161,166,176,179,179,174,159,160,156,151,144,140,136,132,132,133,127,125,125,163,161,161,161,165,175,179,178,172,157,160,155,149,143,139,135,131,131,130,127,125,125],
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
