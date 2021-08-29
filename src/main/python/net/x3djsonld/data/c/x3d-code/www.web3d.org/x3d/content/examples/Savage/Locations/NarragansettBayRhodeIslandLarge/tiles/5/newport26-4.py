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
        texture=ImageTexture(url=['../../images/5/newport26-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[186,183,181,182,180,179,175,173,167,166,163,166,168,169,173,170,162,150,151,163,169,169,184,183,183,185,181,177,170,165,166,164,163,159,160,158,158,155,152,151,150,161,169,170,192,188,188,183,180,179,177,171,165,164,159,157,152,152,149,146,144,146,149,156,166,167,197,196,192,187,184,186,184,178,168,159,157,153,150,148,146,146,148,148,147,148,156,157,197,198,196,191,191,189,187,181,170,165,164,159,154,149,142,142,143,144,144,146,148,149,198,202,200,198,196,191,185,180,171,164,165,165,163,156,145,140,143,143,143,143,148,150,197,196,201,199,195,189,186,180,172,167,160,155,153,149,143,143,147,147,147,146,149,150,198,199,197,196,195,188,186,180,179,170,157,154,146,143,144,144,146,147,151,149,149,149,200,199,197,195,189,186,179,173,168,161,155,150,145,144,150,146,143,146,148,146,150,150,203,202,197,196,190,181,173,168,159,155,153,147,145,146,150,147,143,147,149,145,144,144,203,202,200,196,188,179,176,177,174,168,158,149,144,144,142,141,143,148,150,144,143,144,201,202,204,197,189,182,176,176,181,178,171,161,151,143,140,139,143,143,141,143,141,141,196,200,198,193,189,180,179,183,185,184,179,169,160,148,141,145,141,138,137,138,140,140,195,199,197,193,188,185,182,181,183,187,185,179,164,154,148,146,143,143,142,141,142,143,185,191,196,196,192,188,186,185,179,182,180,180,172,161,159,154,149,145,140,141,147,149,183,185,189,190,186,184,188,185,183,179,175,175,173,154,152,156,152,148,138,148,157,157,177,180,184,190,189,186,191,188,186,178,170,162,154,149,146,151,145,144,137,145,154,155,169,171,175,179,181,184,189,192,187,179,175,168,161,159,153,147,141,139,139,139,140,140,171,167,166,168,174,179,184,182,181,176,171,167,169,165,154,145,146,146,137,137,142,142,171,167,164,165,171,178,180,177,175,171,164,159,157,152,150,145,140,139,137,137,148,151,173,169,164,163,169,174,176,174,174,175,170,160,158,156,155,153,145,137,137,137,141,146,172,170,167,161,164,167,168,170,171,172,168,160,157,157,157,152,149,148,139,137,137,138,171,166,164,161,159,161,162,166,166,166,163,160,155,155,154,154,151,144,144,138,137,137,171,166,164,161,158,161,162,165,165,166,162,160,155,155,154,154,151,144,144,139,137,137],
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
