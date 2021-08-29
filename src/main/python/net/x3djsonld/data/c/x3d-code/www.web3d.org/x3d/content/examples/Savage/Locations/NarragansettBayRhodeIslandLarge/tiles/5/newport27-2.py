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
        texture=ImageTexture(url=['../../images/5/newport27-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[184,185,181,175,168,169,170,162,154,149,149,148,148,153,153,153,158,165,168,174,179,180,187,187,183,177,170,168,168,162,156,150,148,147,148,150,151,151,151,159,165,168,174,175,189,189,184,178,172,169,169,163,158,153,150,150,151,153,153,150,151,154,159,162,165,166,185,185,181,175,173,169,167,159,152,150,151,156,156,156,155,151,151,152,157,162,165,166,183,180,174,169,166,166,165,155,150,155,155,154,160,163,158,154,151,152,158,166,169,169,180,173,169,169,170,164,156,151,150,153,151,151,161,156,157,156,155,154,158,167,169,170,176,175,176,177,177,166,164,152,152,150,150,150,150,153,160,157,156,155,159,168,172,172,178,179,181,182,180,170,160,162,156,151,151,152,155,156,155,157,156,156,157,164,167,168,180,183,187,191,186,172,164,158,154,154,152,153,164,168,162,159,157,156,156,158,163,163,185,187,194,195,190,182,167,159,161,161,158,155,162,174,169,161,158,158,157,158,162,162,187,193,197,197,192,186,171,163,167,167,164,168,169,176,173,165,162,162,158,161,168,169,190,197,199,196,194,185,172,170,175,173,168,169,170,171,169,167,166,163,160,160,161,161,193,198,199,200,198,189,176,180,182,179,170,173,172,172,170,170,169,163,160,163,167,167,192,196,198,199,196,187,183,184,184,183,172,170,176,174,171,168,170,163,161,166,173,173,190,193,195,196,192,186,190,188,186,182,174,174,178,180,175,166,167,168,164,168,173,173,190,192,194,196,194,195,197,194,191,186,175,181,185,184,183,171,167,165,164,167,174,175,190,191,192,193,194,200,201,196,192,184,178,182,189,190,187,174,163,162,161,168,173,173,189,190,190,191,196,202,201,196,187,182,174,175,188,186,188,177,163,158,159,164,171,172,187,189,189,190,195,198,197,190,182,177,171,170,177,177,183,177,168,159,156,159,166,166,187,188,188,189,191,191,188,186,183,179,175,164,162,166,170,170,163,159,151,154,156,156,187,187,188,188,188,188,185,182,177,175,172,163,166,160,158,160,158,151,147,148,150,150,187,187,186,186,187,187,182,181,181,181,172,162,162,160,154,149,148,147,147,148,149,149,187,187,186,185,185,184,182,182,186,181,171,161,160,158,153,148,147,146,146,147,147,147,187,187,186,185,184,184,181,183,187,180,170,161,159,158,153,147,146,146,146,147,147,147],
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
