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
        texture=ImageTexture(url=['../../images/5/newport25-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[162,170,179,184,186,186,187,189,189,185,182,186,187,187,180,178,180,180,176,174,170,170,166,175,177,181,181,184,185,188,185,184,184,187,186,182,182,183,181,180,174,173,171,169,166,174,177,182,181,183,183,185,185,185,183,183,186,183,183,184,186,184,180,176,172,172,167,171,176,179,179,185,187,187,184,183,179,178,186,183,184,187,189,184,182,181,176,175,165,171,178,176,180,183,184,189,186,181,179,175,175,179,189,192,189,187,184,180,175,174,169,174,169,172,175,185,190,185,185,182,176,170,172,171,177,183,185,185,183,178,174,173,167,171,175,174,178,181,186,186,183,179,175,169,167,167,168,171,176,178,176,173,172,172,162,171,177,180,183,184,189,186,182,171,168,167,163,166,162,165,164,170,168,166,157,156,163,169,178,184,187,186,186,182,178,175,172,168,161,163,161,159,158,157,158,152,144,143,161,170,183,188,188,189,183,178,177,178,172,168,164,163,166,165,161,155,148,144,137,136,161,170,178,184,183,180,179,180,177,176,172,170,170,169,173,175,175,171,155,140,135,136,159,167,175,178,178,179,176,173,173,173,170,169,174,179,183,187,186,177,166,150,139,137,159,165,172,171,174,179,177,174,171,169,169,172,174,179,178,183,185,183,176,168,154,151,153,164,171,169,171,175,175,176,174,173,172,170,169,170,173,174,177,180,182,172,163,162,155,164,168,171,175,181,183,183,181,174,174,174,172,165,165,163,166,168,171,171,167,165,158,161,164,168,178,189,189,186,185,177,179,178,179,173,166,162,160,158,157,161,159,159,156,156,162,173,182,191,191,193,189,184,180,181,181,178,173,166,165,170,166,161,157,156,152,155,163,177,186,192,189,199,195,186,185,183,182,176,173,169,166,168,174,178,173,171,152,155,166,177,187,190,193,195,192,188,191,188,184,180,180,174,169,169,174,176,181,182,152,156,166,180,189,191,193,192,193,192,190,187,184,183,183,180,174,174,177,179,179,180,149,160,171,179,185,191,194,194,197,193,188,185,185,182,182,180,181,182,182,177,178,178,154,160,169,175,183,192,194,191,192,189,185,186,183,186,187,185,187,186,180,179,180,178,157,160,167,175,180,187,190,188,188,190,188,186,186,188,186,184,186,186,184,181,185,186,155,161,167,176,180,186,190,187,188,189,187,186,186,187,186,184,186,187,185,181,185,186],
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
