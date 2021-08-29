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
        texture=ImageTexture(url=['../../images/5/newport22-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[162,158,157,150,154,156,157,154,156,156,158,162,178,180,181,184,180,174,170,166,161,160,165,161,157,155,152,156,155,156,156,155,160,170,173,180,181,181,176,171,166,160,154,152,168,161,161,158,157,157,153,155,157,156,160,170,172,177,178,176,170,163,157,152,140,139,168,166,163,158,154,155,156,152,153,155,157,162,170,173,175,167,156,150,143,138,135,135,168,169,166,160,157,155,153,151,152,152,155,160,164,165,164,162,152,146,141,136,132,132,170,170,165,161,158,157,152,151,147,149,154,159,163,165,161,158,153,151,147,142,134,132,174,170,164,160,158,156,153,153,151,155,155,162,164,162,159,158,157,156,156,151,144,143,177,170,165,159,157,158,155,152,155,155,158,163,166,169,167,161,161,163,161,158,152,152,176,170,162,157,156,154,153,156,159,160,165,168,173,175,173,167,164,162,161,158,157,157,177,167,161,158,155,154,157,157,157,162,169,174,177,177,178,175,169,167,164,160,156,155,173,164,158,159,157,157,158,158,164,164,169,173,178,181,178,180,178,173,166,157,156,155,169,165,161,159,159,161,160,163,164,168,172,175,177,179,181,185,180,174,169,160,154,153,168,164,163,164,164,162,163,164,168,171,174,178,180,182,181,181,177,171,166,159,158,158,169,165,163,164,165,169,168,170,173,176,177,178,180,183,184,180,176,172,165,160,160,160,166,164,166,165,167,171,173,176,180,180,181,183,182,182,181,181,178,171,163,164,161,160,167,168,168,169,170,173,179,186,185,184,185,182,184,182,176,178,174,170,165,166,161,160,168,168,168,170,174,178,183,185,188,188,187,182,180,180,180,174,173,168,165,164,161,160,168,169,170,174,178,179,182,187,188,189,189,183,182,183,177,172,168,165,164,161,157,156,169,170,173,174,178,182,183,185,187,189,185,182,179,179,176,171,166,163,161,157,151,150,166,172,172,178,180,181,183,185,184,182,181,181,183,179,176,170,163,163,160,155,147,146,168,170,176,181,181,183,185,179,179,177,177,180,180,178,176,172,167,163,155,153,152,152,167,171,177,180,182,181,180,179,177,176,176,178,178,176,178,174,170,162,160,161,165,166,169,176,180,181,179,179,180,179,177,174,178,177,176,176,176,175,171,163,163,169,175,176,170,177,181,181,180,179,179,179,177,175,178,177,175,176,177,175,171,163,165,170,176,177],
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
