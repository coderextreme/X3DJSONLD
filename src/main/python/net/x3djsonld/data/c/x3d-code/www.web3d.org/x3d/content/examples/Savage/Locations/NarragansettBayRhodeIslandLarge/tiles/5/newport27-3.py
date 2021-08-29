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
        texture=ImageTexture(url=['../../images/5/newport27-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[180,187,192,195,199,200,204,208,209,208,207,205,201,197,193,191,191,190,186,179,172,171,175,183,189,192,196,200,204,207,208,207,206,204,201,196,194,195,197,195,189,183,176,174,166,174,180,189,193,199,203,205,206,206,205,202,199,197,196,197,200,199,196,188,182,181,166,171,178,189,191,196,200,203,205,204,202,200,199,198,198,199,200,200,196,190,185,184,169,171,175,186,189,192,197,201,203,202,199,198,199,200,200,201,201,201,198,194,189,188,170,172,173,180,186,190,195,200,199,198,196,197,200,200,200,201,202,201,199,195,191,190,172,173,172,178,181,184,192,195,194,193,195,197,200,200,200,201,200,199,198,197,195,194,168,170,170,174,179,182,185,186,188,192,195,197,200,201,202,200,198,196,194,194,193,192,163,167,170,174,177,180,182,184,189,194,197,197,199,201,200,198,197,192,190,188,188,188,162,164,166,172,176,181,185,188,192,197,199,199,200,200,201,199,196,192,188,186,185,185,169,166,167,169,176,180,191,193,193,199,201,201,200,199,198,196,192,189,186,184,184,184,161,171,171,170,175,185,195,199,196,199,203,202,199,196,194,192,189,188,184,182,182,182,167,172,169,172,176,189,199,205,204,201,203,202,199,195,192,189,188,185,184,181,179,179,173,174,170,173,181,193,200,204,206,204,203,201,199,195,192,189,186,184,182,180,179,179,173,173,173,174,182,194,200,201,202,203,202,198,194,192,190,187,185,182,180,176,175,175,175,174,172,174,182,192,198,198,198,199,199,196,193,190,186,188,187,185,180,175,174,174,173,173,169,172,178,187,191,190,191,192,193,192,189,187,184,187,185,184,179,173,170,169,172,170,168,172,176,181,184,183,186,187,185,184,182,183,181,181,181,175,172,168,166,166,166,166,167,168,173,175,176,179,182,184,184,180,179,180,179,176,174,171,168,165,163,163,156,160,164,165,169,173,175,179,181,179,179,177,175,175,173,171,171,170,168,164,160,160,150,156,157,159,168,173,176,180,180,178,175,175,174,171,171,172,173,168,164,157,154,153,149,150,151,158,165,172,174,177,178,175,172,173,172,173,175,178,178,174,170,164,156,155,147,148,150,156,162,169,170,172,172,170,170,170,169,174,180,180,177,174,170,166,160,159,147,148,150,156,162,169,169,170,172,170,170,169,168,175,180,180,177,174,169,165,160,159],
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
