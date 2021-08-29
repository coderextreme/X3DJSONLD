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
        texture=ImageTexture(url=['../../images/5/newport15-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[30,32,32,37,43,50,51,51,43,33,20,5,0,0,0,1,1,1,1,2,3,3,29,33,32,35,43,50,49,46,40,29,19,7,1,0,0,0,0,1,2,2,0,1,29,33,34,35,38,42,43,44,39,33,24,10,2,0,0,0,1,2,2,4,2,2,23,30,36,35,36,39,43,43,39,34,25,15,3,1,0,0,0,1,2,6,5,4,23,27,32,35,36,36,40,42,39,39,31,18,4,2,0,0,1,2,3,7,7,7,23,27,31,33,37,34,38,44,41,38,34,25,8,4,0,0,1,1,1,6,9,10,23,23,28,31,35,37,39,43,43,41,41,33,12,2,0,0,0,0,0,6,10,11,23,23,28,32,36,39,42,45,45,45,43,37,18,0,0,0,0,0,0,5,12,14,23,23,26,33,36,40,43,43,43,44,49,38,20,1,0,0,0,0,0,2,14,16,23,23,24,32,37,39,45,43,46,48,45,39,26,5,0,0,0,1,0,3,13,15,23,23,23,32,39,41,42,41,40,44,44,40,30,15,0,0,0,2,0,3,10,13,23,23,23,32,40,42,43,42,41,46,45,38,29,18,2,0,0,1,1,2,11,14,23,23,28,33,38,44,46,45,41,41,40,37,29,13,0,0,0,1,1,2,12,15,23,23,34,36,40,47,50,45,39,38,40,34,24,10,1,0,0,2,2,3,11,13,22,28,33,40,47,48,51,49,39,34,35,34,22,8,1,0,0,0,3,5,9,11,25,29,37,45,54,55,54,52,40,32,31,29,26,8,2,0,0,0,5,5,9,12,28,33,39,49,54,57,56,56,47,36,30,25,20,8,0,0,0,0,3,4,8,11,31,36,42,50,55,58,58,57,53,38,32,20,13,5,0,0,0,0,0,4,8,10,34,39,44,48,52,58,60,59,59,40,30,18,7,0,0,0,0,0,0,3,9,10,37,42,46,51,55,61,65,63,57,42,27,14,4,0,0,0,0,0,0,3,9,11,36,41,47,56,60,65,70,67,63,48,29,11,5,0,0,0,4,1,0,3,7,9,38,45,53,61,63,67,71,71,64,50,32,13,6,0,0,0,1,2,0,2,7,9,42,47,55,61,67,70,70,72,68,52,32,13,2,0,0,0,0,0,0,2,7,10,43,47,55,61,68,71,69,72,67,52,32,13,1,0,0,0,0,1,0,3,7,9],
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
