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
        texture=ImageTexture(url=['../../images/5/newport27-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[150,157,165,172,176,182,183,184,182,184,182,183,187,189,189,189,189,187,182,178,179,179,152,157,165,171,174,182,183,183,186,187,183,184,183,188,185,187,183,178,178,179,177,176,154,157,164,172,173,181,184,184,184,182,175,177,180,183,183,181,174,174,173,172,172,173,158,162,165,169,170,177,183,185,181,179,178,180,178,175,171,167,163,164,167,167,170,171,159,164,166,167,172,173,178,180,180,179,178,174,169,164,160,159,160,161,160,162,165,165,159,165,166,167,171,174,177,176,171,170,170,169,162,158,160,157,156,157,157,161,161,161,160,164,167,166,170,170,172,168,166,165,167,166,161,160,158,158,155,153,156,160,159,159,160,162,165,167,166,166,166,165,166,169,165,164,166,165,162,157,153,152,158,162,166,168,162,162,164,163,165,164,166,164,165,167,165,168,166,165,161,161,161,162,166,167,175,177,163,162,161,160,160,161,162,165,170,168,169,170,170,165,163,161,162,160,166,172,183,185,163,162,158,158,160,159,158,162,165,167,175,171,173,165,157,157,162,167,172,173,181,183,166,163,159,159,159,159,160,162,165,169,173,169,162,157,157,159,168,169,171,177,181,182,163,159,157,157,157,160,163,165,170,170,166,162,157,157,157,167,172,172,173,178,181,181,158,157,159,158,160,165,167,168,169,170,168,166,158,157,161,167,170,173,174,178,179,179,158,159,157,160,165,168,170,171,172,175,172,170,166,165,166,166,170,173,171,171,172,173,159,159,159,164,168,172,174,176,175,176,177,173,170,172,174,171,172,173,172,170,172,174,155,156,163,169,171,175,176,178,178,176,177,173,177,179,178,176,176,173,174,180,179,179,155,160,166,169,172,178,182,184,183,178,176,176,180,182,180,179,180,178,182,185,187,187,160,167,173,177,182,185,182,182,183,181,177,179,181,182,179,180,183,183,191,194,199,200,170,176,182,186,190,192,192,190,188,184,183,185,186,187,184,188,189,193,199,205,203,202,175,182,187,191,195,195,194,194,189,184,186,188,188,189,186,187,192,197,202,204,203,203,180,187,192,195,196,194,194,195,189,187,191,193,191,187,189,193,198,201,204,203,203,202,180,186,191,195,198,199,198,194,191,191,193,193,192,189,194,197,198,202,202,206,204,203,181,186,191,197,199,200,200,194,192,193,194,194,192,189,194,198,198,202,202,206,204,204],
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
