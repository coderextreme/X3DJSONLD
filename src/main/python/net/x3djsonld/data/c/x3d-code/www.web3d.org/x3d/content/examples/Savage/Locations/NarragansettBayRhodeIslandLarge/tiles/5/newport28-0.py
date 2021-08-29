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
        texture=ImageTexture(url=['../../images/5/newport28-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[181,186,191,197,199,200,200,194,192,193,194,194,192,189,194,198,198,202,202,206,204,204,185,190,195,199,202,203,201,201,202,202,198,193,191,192,195,198,201,205,201,200,204,204,186,193,196,202,202,200,199,201,203,203,199,195,194,192,195,195,199,203,205,205,203,203,185,193,199,202,206,202,200,204,205,203,198,197,196,196,195,195,200,202,207,205,204,203,186,195,200,203,201,202,204,205,205,206,203,199,202,202,201,204,200,201,206,205,206,206,184,193,198,199,201,204,207,209,209,210,205,203,202,205,206,208,205,207,204,206,207,207,186,188,191,195,199,206,209,211,208,207,205,204,205,206,206,206,209,209,209,211,210,210,189,188,189,190,199,204,205,208,209,206,205,204,204,205,206,208,209,208,209,209,210,209,189,191,193,191,194,201,203,204,206,203,204,202,202,206,206,208,209,209,210,210,211,211,189,193,196,194,193,196,196,198,202,201,202,205,205,207,206,208,207,210,210,209,209,208,188,192,194,196,197,198,198,195,198,201,203,205,208,207,206,206,206,205,205,205,204,204,187,193,197,198,200,200,199,199,201,201,202,204,203,205,203,203,204,203,204,206,207,208,190,195,196,198,201,200,202,202,202,204,204,203,205,204,204,207,208,205,205,204,205,205,193,196,200,204,200,201,201,201,202,206,205,205,204,204,205,207,204,207,208,206,209,210,194,200,201,202,202,201,200,200,199,202,204,207,206,207,206,207,205,204,207,208,208,209,193,198,198,201,198,200,201,202,200,198,200,202,199,202,206,205,207,207,205,210,212,212,192,197,202,203,202,201,200,201,199,198,202,200,201,199,203,202,205,209,209,209,212,211,192,195,198,197,199,200,201,201,202,202,199,200,203,202,202,204,204,206,205,208,209,209,198,198,199,198,200,199,200,201,198,200,201,202,203,204,205,204,203,203,204,205,208,208,198,198,197,200,200,199,200,201,201,201,202,202,203,207,206,205,206,205,205,205,207,207,201,205,204,202,201,201,202,202,203,202,201,203,207,206,208,210,210,208,207,207,206,207,203,205,207,204,200,201,203,204,204,204,202,203,207,209,209,210,208,209,209,210,210,210,202,202,202,201,203,204,202,204,204,203,205,207,207,209,209,210,211,210,210,211,211,211,202,202,201,202,203,203,202,203,204,203,205,206,207,209,209,210,211,210,210,211,210,210],
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
