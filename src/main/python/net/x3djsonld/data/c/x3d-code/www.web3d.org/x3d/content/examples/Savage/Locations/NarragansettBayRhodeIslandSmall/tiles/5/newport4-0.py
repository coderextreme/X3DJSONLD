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
        texture=ImageTexture(url=['../../images/5/newport4-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[35,36,35,33,30,28,25,20,16,13,11,4,0,0,0,0,0,0,0,0,0,0,0,36,37,36,34,31,28,24,20,16,13,9,1,0,0,0,0,0,0,0,0,0,0,0,37,37,36,35,32,28,24,20,16,13,8,0,0,0,0,0,0,0,0,0,0,0,0,37,37,36,35,32,29,26,21,17,14,7,0,0,0,0,0,0,0,0,0,0,0,0,37,37,36,35,33,30,26,23,18,14,7,0,0,0,0,0,0,0,0,0,0,0,0,37,37,36,35,33,29,26,22,18,13,9,2,0,0,0,0,0,0,0,0,0,0,0,37,36,36,34,32,28,24,21,17,12,9,4,1,0,0,0,0,0,0,0,0,0,0,37,37,36,33,31,27,23,19,15,11,8,4,2,0,0,0,0,0,0,0,0,0,0,37,36,36,33,30,26,22,18,14,10,7,4,1,0,0,0,0,0,0,0,0,0,0,35,36,36,33,30,26,22,19,14,10,6,3,1,0,0,0,0,0,0,0,0,0,0,35,35,35,33,29,26,22,18,14,10,5,2,0,0,0,0,0,0,0,0,0,0,0,35,35,34,32,28,25,21,17,14,9,5,0,0,0,0,0,0,0,0,0,0,0,0,35,35,32,30,27,23,20,16,13,9,5,0,0,0,0,0,0,0,0,0,0,0,0,34,33,30,28,25,22,18,15,11,8,4,0,0,0,0,0,0,0,0,0,0,0,0,33,31,29,27,24,21,17,14,10,7,4,0,0,0,0,0,0,0,0,0,0,0,0,33,31,28,25,23,20,16,12,8,7,4,0,0,0,0,0,0,0,0,0,0,0,0,32,30,27,24,22,19,15,11,7,6,3,0,0,0,0,0,0,0,0,0,0,0,0,31,28,26,23,20,17,14,10,7,5,3,0,0,0,0,0,0,0,0,0,0,0,0,29,27,24,21,19,16,12,9,6,4,2,0,0,0,0,0,0,0,0,0,0,0,0,27,25,22,19,17,14,10,8,5,3,1,0,0,0,0,0,0,0,0,0,0,0,0,26,24,21,17,15,12,9,7,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,24,22,19,16,13,10,8,5,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,23,21,18,15,12,10,7,5,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
