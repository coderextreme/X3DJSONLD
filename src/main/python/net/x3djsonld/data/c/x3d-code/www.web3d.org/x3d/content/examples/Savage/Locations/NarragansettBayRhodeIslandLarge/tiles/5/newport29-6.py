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
        texture=ImageTexture(url=['../../images/5/newport29-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[175,170,165,163,160,156,151,147,143,141,140,141,142,143,146,148,149,151,154,156,158,157,180,175,170,167,163,157,153,148,144,143,142,142,143,145,148,150,151,152,154,155,155,155,182,179,174,170,164,159,153,149,146,147,143,144,146,147,149,151,154,155,155,154,155,154,184,182,177,171,166,160,155,151,150,151,145,147,150,149,152,156,158,158,158,158,159,159,188,183,179,173,167,162,157,155,155,150,148,150,152,152,156,160,161,161,161,163,167,166,189,184,179,173,168,163,160,157,155,154,153,151,152,154,160,163,164,165,167,169,171,171,189,185,180,174,169,164,160,157,156,156,155,153,152,155,161,164,166,168,171,173,173,173,189,184,180,175,169,165,161,158,158,158,156,154,154,156,162,164,166,169,172,175,175,174,187,183,179,176,171,167,164,161,162,160,157,155,154,158,162,164,167,170,173,177,175,175,186,182,179,176,172,168,165,164,164,161,158,157,158,161,164,166,168,170,174,177,176,176,186,182,179,178,176,172,169,169,166,163,160,161,162,166,170,170,171,172,175,177,176,176,187,183,179,179,178,175,173,170,168,163,162,163,165,171,174,175,176,177,179,178,175,175,187,184,180,176,176,176,174,172,169,164,164,166,170,176,180,180,179,177,176,175,173,172,189,185,182,177,176,176,176,174,171,166,168,170,174,181,183,181,178,176,174,173,172,171,193,192,187,181,176,175,174,174,172,169,169,172,180,184,184,181,178,175,173,171,170,169,196,195,192,185,178,175,174,173,171,170,171,177,179,179,178,177,175,174,172,170,168,167,198,196,195,189,182,176,175,173,172,172,173,176,175,175,175,174,172,171,170,168,165,164,198,197,195,190,185,181,178,174,172,173,174,174,173,172,171,171,170,169,166,163,159,159,199,197,196,195,191,186,181,178,176,175,173,172,171,169,168,167,166,164,161,158,154,153,200,199,198,197,193,186,182,180,176,174,172,169,167,162,160,158,157,156,155,152,147,146,201,200,198,196,191,185,182,178,175,172,169,166,161,156,154,153,152,151,150,147,143,143,201,199,197,194,189,184,180,176,173,170,166,162,157,152,150,149,148,147,145,143,140,139,201,199,196,192,188,183,179,175,171,168,163,159,153,148,147,146,145,144,141,139,138,138,201,199,195,192,188,183,179,175,171,167,163,159,152,148,146,145,144,143,141,139,138,138],
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
