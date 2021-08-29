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
        texture=ImageTexture(url=['../../images/5/newport31-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[152,154,154,152,150,145,148,147,147,151,153,158,161,164,168,174,180,179,173,173,177,178,158,160,158,156,153,149,145,146,147,149,153,157,161,163,165,167,173,175,172,172,178,179,165,163,158,155,151,147,145,148,148,149,151,157,160,161,161,162,169,172,173,174,179,180,171,165,158,155,151,149,147,148,149,153,156,158,159,160,160,160,165,172,176,176,179,180,171,168,163,159,157,152,154,153,153,156,159,161,161,159,160,160,169,174,174,175,178,179,175,172,168,166,161,157,157,159,159,158,160,163,161,159,160,161,166,170,171,175,180,181,179,176,171,168,163,159,158,162,162,158,163,162,163,160,161,161,162,163,166,169,175,177,183,178,175,171,166,162,161,162,160,160,162,164,165,161,162,160,159,159,159,161,166,167,187,181,179,176,169,168,165,165,166,166,167,166,164,162,164,163,160,161,160,160,160,160,187,184,185,182,175,174,171,173,171,168,168,167,167,164,164,163,161,163,163,162,161,161,185,185,186,182,182,178,178,179,173,169,170,170,168,165,164,163,161,163,165,163,162,162,185,187,186,183,185,183,185,183,174,172,173,171,168,165,165,165,164,171,171,164,163,163,187,186,185,185,185,187,187,182,173,173,173,172,169,167,168,167,167,170,171,170,164,163,188,186,185,186,186,186,183,179,172,173,174,171,169,169,170,169,168,169,173,172,169,168,189,188,187,187,186,184,181,178,176,176,174,171,171,172,172,172,173,171,171,172,171,171,190,189,189,188,186,183,181,180,180,177,175,174,174,175,175,174,174,174,174,173,167,166,192,191,193,191,186,183,183,184,183,180,177,176,178,178,179,178,177,173,169,171,167,166,194,195,196,192,187,185,187,187,185,181,179,178,180,181,182,181,178,174,170,168,168,168,198,200,196,191,188,191,191,187,184,181,179,180,181,183,184,182,180,176,173,171,169,169,202,199,199,193,195,193,192,185,181,180,180,183,186,186,184,185,182,178,175,172,172,172,209,207,203,196,193,190,187,186,187,186,186,189,188,185,184,181,179,178,177,175,174,174,218,213,204,199,197,191,187,186,193,190,192,190,190,185,181,178,180,181,182,180,178,178,223,212,208,206,197,191,192,190,195,198,195,189,185,184,183,185,181,182,179,177,177,177,223,212,210,208,199,193,191,191,194,197,196,189,185,185,184,185,179,182,180,176,178,178],
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
