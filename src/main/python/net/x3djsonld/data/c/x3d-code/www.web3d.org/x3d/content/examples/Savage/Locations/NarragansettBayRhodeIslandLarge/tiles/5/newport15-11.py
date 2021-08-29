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
        texture=ImageTexture(url=['../../images/5/newport15-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[30,28,28,28,30,30,29,27,26,27,27,29,30,34,45,52,54,55,57,58,59,60,30,30,29,29,30,30,30,29,28,28,28,29,29,30,35,42,50,53,55,57,58,59,29,28,27,28,28,29,29,29,29,27,27,28,28,27,29,36,42,47,52,55,58,58,29,29,29,28,30,31,31,29,28,28,29,29,29,28,29,29,39,46,49,51,54,54,29,29,29,29,30,31,30,29,27,29,27,29,29,28,28,28,32,41,47,52,54,54,31,30,28,27,28,29,30,27,29,29,28,26,29,28,28,27,30,36,43,49,53,53,30,30,31,29,29,30,30,29,28,28,27,26,27,29,29,30,35,40,41,47,52,52,29,29,29,29,30,27,29,30,30,30,30,28,26,28,36,39,43,41,43,48,53,53,28,29,29,29,30,29,29,30,30,30,30,30,29,27,33,37,40,42,45,51,56,57,28,29,29,29,30,29,27,28,29,31,30,31,32,30,28,31,36,41,45,52,59,60,28,28,29,29,29,29,27,27,28,28,30,31,31,30,29,28,33,38,43,51,57,58,31,29,27,30,30,31,29,29,30,28,30,31,32,32,32,28,30,35,41,49,55,56,33,30,27,30,31,29,31,31,31,31,31,31,31,32,31,30,28,32,39,47,54,55,32,32,30,29,27,29,32,31,29,29,30,31,32,33,32,30,28,32,39,45,53,54,32,32,33,28,27,32,32,31,29,29,30,32,32,33,32,30,30,33,39,45,52,53,33,34,34,31,27,31,32,31,31,30,31,32,32,33,33,32,31,32,38,45,51,52,31,33,32,32,28,28,28,32,32,31,31,30,30,31,31,31,31,32,37,44,50,51,32,33,33,33,29,28,28,31,33,32,31,31,30,30,31,31,32,32,37,45,49,50,33,34,34,34,33,28,28,28,32,32,32,31,31,30,31,31,31,31,34,42,46,46,34,34,33,33,33,31,29,29,31,32,32,32,31,31,30,30,29,30,32,40,45,45,34,33,32,32,32,31,28,27,32,33,33,33,33,33,32,30,27,28,34,41,48,48,32,34,35,34,34,32,28,25,32,33,35,36,36,36,36,33,30,29,31,39,47,48,35,35,35,35,36,30,30,27,29,31,36,36,36,36,36,37,37,32,29,35,44,46,36,36,35,35,35,29,30,28,29,30,36,36,35,36,36,37,37,32,30,34,44,45],
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
