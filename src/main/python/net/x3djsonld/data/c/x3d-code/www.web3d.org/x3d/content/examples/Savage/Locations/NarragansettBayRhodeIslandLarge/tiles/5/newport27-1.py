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
        texture=ImageTexture(url=['../../images/5/newport27-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[179,179,175,173,176,173,166,166,170,171,164,156,150,144,142,148,157,164,167,171,182,184,176,177,176,178,178,176,175,170,167,164,159,151,147,143,147,152,160,168,175,182,187,187,173,177,180,175,177,174,175,168,163,157,154,145,144,145,153,159,166,172,179,184,188,189,171,170,173,178,177,176,175,171,163,156,149,140,141,144,153,162,170,175,178,182,184,185,165,167,173,175,174,171,172,167,160,152,144,144,140,146,154,162,169,175,178,181,183,183,161,163,165,162,160,159,161,158,154,148,146,143,144,148,154,162,166,171,175,180,181,180,159,165,172,169,167,163,157,152,148,145,143,144,146,151,156,161,167,170,175,178,177,176,168,176,177,178,175,172,166,158,156,154,150,145,143,150,158,163,165,168,174,179,178,178,177,185,187,187,185,176,169,164,163,162,159,157,155,154,155,162,164,167,175,181,180,180,185,192,191,190,187,183,175,169,168,167,168,168,164,160,159,162,165,171,176,181,184,185,183,185,188,191,191,187,178,173,175,173,173,173,168,165,165,162,167,173,178,183,187,187,182,186,189,189,189,185,177,178,181,182,178,174,168,167,168,169,173,178,181,185,189,190,181,182,190,185,185,182,178,180,182,180,176,173,174,171,170,172,177,180,183,186,191,193,179,182,183,185,188,182,176,178,179,180,178,173,170,170,171,174,179,183,186,188,192,192,173,179,181,185,185,182,179,177,177,179,178,175,171,170,171,174,179,181,183,186,189,190,174,177,179,183,181,181,184,186,183,180,177,172,170,169,171,175,179,182,184,186,189,190,179,181,184,183,181,184,187,189,186,180,176,174,169,171,172,175,177,180,183,187,190,190,187,189,192,190,187,185,185,185,184,179,176,172,173,172,174,176,177,179,182,186,189,189,200,196,192,191,188,189,186,187,184,183,176,174,172,174,174,178,178,180,181,184,187,187,202,200,196,190,187,187,186,185,184,184,182,179,180,182,180,182,185,184,183,185,186,187,203,201,196,190,188,188,193,191,185,181,180,180,179,181,183,184,185,187,185,186,187,187,202,200,196,192,190,191,193,191,189,186,183,179,178,181,183,185,185,187,188,187,187,187,203,199,193,194,192,190,193,192,190,187,185,184,183,184,185,185,186,187,189,188,187,187,204,199,193,194,192,190,193,192,191,187,186,184,184,184,186,186,187,186,188,189,187,187],
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
