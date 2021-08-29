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
        texture=ImageTexture(url=['../../images/5/newport28-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[204,199,193,194,192,190,193,192,191,187,186,184,184,184,186,186,187,186,188,189,187,187,204,201,199,199,199,195,191,191,192,190,189,190,189,186,189,188,187,188,190,189,188,188,203,203,200,197,196,197,192,191,192,191,189,191,189,190,189,191,190,190,190,190,188,188,203,204,202,199,200,198,195,193,190,191,189,190,190,191,191,189,189,189,189,186,181,180,206,205,207,205,200,197,191,192,189,191,189,190,189,190,189,187,188,188,185,182,177,177,207,209,208,206,203,199,197,194,194,194,193,192,192,192,190,190,189,186,184,180,175,175,210,209,208,205,204,200,199,198,197,194,193,191,191,189,188,189,186,183,181,178,176,176,209,209,209,208,206,200,199,197,196,194,194,190,190,190,190,187,184,182,179,177,177,177,211,207,208,208,205,202,200,198,194,193,192,191,192,192,190,188,185,182,180,179,180,180,208,207,208,206,203,203,201,198,194,189,189,192,191,191,190,190,186,185,183,183,181,181,204,206,208,206,204,200,198,195,194,193,193,191,189,191,187,185,185,186,185,184,181,181,208,207,205,204,206,200,198,193,191,191,191,190,190,189,186,183,187,187,186,184,181,180,205,207,207,204,203,200,200,200,196,194,191,189,187,187,186,185,185,186,186,184,179,179,210,211,207,205,203,202,197,197,196,194,190,191,191,191,187,187,186,186,186,182,179,179,209,209,209,205,202,202,200,197,198,196,195,194,189,189,191,188,190,189,185,183,184,184,212,208,208,204,200,201,199,201,200,201,194,191,193,191,191,191,191,189,187,186,186,185,211,208,207,208,206,202,198,197,197,196,195,196,197,196,196,196,193,189,188,187,185,185,209,209,209,206,204,205,201,199,197,193,196,198,200,198,198,198,194,193,191,189,186,185,208,212,210,208,205,202,202,198,196,196,198,199,200,201,202,198,196,192,191,189,187,187,207,208,207,205,205,203,202,198,196,196,200,200,201,204,200,198,196,195,194,191,190,190,207,207,206,204,204,201,201,199,198,200,203,204,205,204,200,198,196,196,197,194,193,193,210,209,206,206,204,202,201,201,200,201,201,205,205,205,203,200,197,198,196,196,194,194,211,211,210,206,203,199,199,198,201,201,203,205,204,201,200,199,199,197,197,197,196,196,210,210,211,207,203,199,198,198,200,201,203,204,203,200,199,199,199,197,198,197,196,196],
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
