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
        texture=ImageTexture(url=['../../images/5/newport26-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[155,161,167,176,180,186,190,187,188,189,187,186,186,187,186,184,186,187,185,181,185,186,160,164,167,171,175,181,182,185,188,187,191,186,184,185,185,191,195,188,191,188,184,184,161,165,166,170,173,178,179,186,187,187,186,186,190,186,188,193,193,195,194,193,192,192,167,166,171,170,175,178,180,183,184,186,185,188,189,189,191,196,195,195,193,198,198,197,168,174,175,175,175,176,179,180,183,186,190,189,186,189,195,196,197,194,198,198,196,197,177,176,175,178,180,179,182,182,183,186,189,189,190,193,195,194,194,196,197,197,198,198,181,181,183,183,180,181,181,183,188,190,191,191,191,192,192,194,194,194,195,198,197,197,186,189,185,184,186,182,185,185,188,191,190,195,194,194,190,191,191,195,196,196,197,198,186,185,186,187,185,188,187,189,190,196,191,194,196,198,195,189,191,194,193,195,200,200,184,186,187,191,191,192,193,195,196,198,198,194,193,191,195,191,194,193,193,196,202,203,187,185,187,190,193,198,200,202,199,196,197,196,195,190,193,192,191,191,196,199,203,203,186,184,186,190,198,200,201,200,201,196,198,198,197,195,191,189,188,194,198,198,201,201,185,185,188,193,194,199,204,205,202,201,197,196,195,194,192,195,196,195,198,197,196,196,184,188,192,194,200,202,201,201,201,199,198,198,197,196,193,192,192,193,194,194,194,195,185,188,194,197,201,204,202,202,201,199,198,198,199,197,193,191,190,189,188,187,185,185,184,188,194,200,203,204,204,203,201,200,200,201,200,196,191,189,187,185,184,184,183,183,184,189,195,201,204,204,205,204,202,201,202,203,200,196,191,186,182,179,178,177,178,177,184,189,194,199,204,205,205,205,204,204,204,204,199,196,194,189,185,175,173,170,170,169,186,189,195,199,204,205,205,206,206,206,205,202,201,200,197,192,188,179,176,173,171,171,186,191,195,200,203,204,206,206,207,207,205,204,203,201,198,195,191,186,180,176,171,171,184,190,196,200,203,204,205,206,206,207,206,207,204,201,199,194,190,187,180,176,174,173,182,188,194,198,201,203,203,206,207,207,207,206,204,201,196,191,189,184,179,175,172,172,180,187,192,196,199,200,203,207,209,208,207,205,202,197,193,191,191,189,186,179,172,171,180,187,192,195,199,200,204,208,209,208,207,205,201,197,193,191,191,190,186,179,172,171],
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
