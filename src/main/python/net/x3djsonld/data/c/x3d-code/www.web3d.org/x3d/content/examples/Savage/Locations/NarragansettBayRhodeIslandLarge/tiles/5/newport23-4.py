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
        texture=ImageTexture(url=['../../images/5/newport23-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[170,177,181,181,180,179,179,179,177,175,178,177,175,176,177,175,171,163,165,170,176,177,176,180,184,185,185,185,181,177,176,178,176,173,174,176,173,171,170,171,170,176,184,185,182,181,183,182,182,184,179,179,179,179,174,174,174,170,167,168,169,170,174,185,188,189,186,184,183,182,184,182,182,178,176,174,174,174,174,168,163,160,165,169,172,184,187,187,184,186,184,183,180,180,177,177,174,172,174,177,172,169,160,159,159,165,171,176,181,182,182,179,182,182,180,177,175,175,172,171,173,174,172,169,167,163,159,164,164,163,169,171,178,175,178,178,177,172,170,170,170,169,171,170,171,171,172,169,166,161,165,160,161,161,173,173,173,171,170,166,165,165,165,169,169,169,172,173,172,172,166,160,160,159,156,155,169,168,168,166,165,165,161,158,160,167,168,168,172,175,175,170,164,158,155,153,152,153,160,165,162,162,159,159,157,158,158,159,161,166,170,171,172,168,160,155,153,155,152,150,156,161,158,156,156,155,151,152,152,154,162,165,164,166,162,157,154,155,160,152,144,144,153,156,160,164,160,160,153,150,148,151,154,153,156,156,152,152,150,155,152,144,144,144,158,163,164,166,170,167,165,158,152,152,151,152,150,150,145,144,147,152,145,144,144,144,167,170,172,174,176,175,173,170,165,159,158,158,155,153,153,149,146,144,145,144,144,144,175,174,179,179,179,181,181,177,174,169,170,170,168,165,164,164,163,155,144,144,144,144,172,177,179,180,180,178,178,180,179,180,181,182,182,178,176,173,170,163,160,150,144,144,176,174,179,182,178,179,181,181,185,182,183,181,183,183,182,179,172,166,164,161,162,160,170,171,171,172,176,174,175,176,180,181,181,180,179,180,181,178,173,168,165,163,162,161,170,167,164,163,164,162,167,169,171,174,174,176,176,177,177,175,169,166,165,160,157,157,164,160,154,149,147,154,160,164,166,168,169,171,178,174,172,170,164,160,158,153,150,150,160,155,148,145,149,152,155,160,164,169,169,170,173,172,174,169,167,162,155,153,152,152,151,151,149,144,144,147,152,160,163,167,170,172,172,172,172,170,166,162,155,158,155,154,149,143,142,146,144,141,146,152,161,165,171,181,180,176,168,164,162,155,154,160,158,158,146,142,141,145,144,141,145,152,160,166,172,182,179,175,167,163,161,154,153,160,159,158],
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
