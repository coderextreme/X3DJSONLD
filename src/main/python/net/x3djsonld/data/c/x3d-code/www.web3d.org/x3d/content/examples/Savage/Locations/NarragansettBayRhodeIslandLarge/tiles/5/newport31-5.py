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
        texture=ImageTexture(url=['../../images/5/newport31-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[179,183,185,186,188,192,197,203,206,207,204,203,203,203,201,196,192,190,189,188,187,186,175,179,183,185,189,194,199,204,205,203,200,201,204,204,201,196,192,189,187,186,184,183,173,179,183,185,190,196,201,204,201,199,200,203,205,203,199,194,190,188,186,184,180,179,170,178,183,186,193,200,204,201,198,199,202,205,204,202,197,192,188,186,183,180,177,177,169,177,183,187,193,199,201,197,196,199,202,203,202,200,196,191,186,182,180,177,174,173,169,179,184,189,194,199,198,194,194,197,199,200,198,196,193,189,182,177,177,174,172,170,171,177,185,190,194,197,197,194,194,194,195,195,193,191,189,184,177,172,172,170,167,166,182,179,183,190,194,195,195,192,192,193,193,191,188,186,182,178,172,166,163,162,159,157,184,181,182,188,192,193,193,191,191,191,191,187,183,178,174,168,166,163,161,154,152,151,177,179,182,187,189,190,190,190,189,189,187,183,178,175,173,175,175,173,166,156,146,144,173,178,181,185,186,187,188,187,184,184,180,177,176,175,177,177,171,175,167,156,144,143,170,173,178,182,183,184,184,182,176,176,174,172,174,180,184,179,166,169,163,154,149,149,166,169,173,176,178,178,178,174,170,171,169,167,171,180,189,183,173,164,159,152,154,153,161,164,169,172,172,171,169,166,165,166,163,164,168,178,188,182,175,165,159,159,158,157,156,160,162,165,165,164,162,160,162,161,158,160,164,172,179,177,172,163,160,161,161,160,154,155,158,160,160,158,155,158,158,156,154,156,159,166,173,170,171,167,164,161,163,163,151,153,155,157,156,153,154,156,155,155,155,155,156,158,166,174,176,171,165,164,165,165,146,152,153,154,153,155,158,160,157,156,155,156,157,160,169,176,181,175,167,166,167,166,146,150,152,150,151,156,164,169,168,164,155,156,158,164,171,177,181,176,170,168,167,166,147,149,149,149,148,157,166,168,174,169,165,161,163,170,176,175,177,171,177,168,166,164,143,145,148,151,154,158,165,168,173,173,166,165,173,178,179,176,174,165,167,168,167,167,143,148,149,151,149,155,163,170,171,176,176,174,174,175,176,172,170,165,165,170,166,164,144,149,148,150,153,156,164,172,169,173,176,174,179,176,174,176,165,165,167,174,168,166,143,149,148,150,155,157,164,171,168,173,176,173,179,177,174,176,165,165,169,173,169,167],
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
