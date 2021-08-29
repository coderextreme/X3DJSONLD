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
        texture=ImageTexture(url=['../../images/5/newport16-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[43,47,55,61,68,71,69,72,67,52,32,13,1,0,0,0,0,1,0,3,7,9,45,50,57,63,69,72,70,70,65,49,29,10,0,0,0,0,0,4,1,2,6,9,48,55,61,67,70,72,71,71,61,45,24,1,0,0,0,1,1,3,0,1,7,10,50,57,63,68,73,70,67,62,52,40,20,3,0,0,0,0,2,3,4,6,11,13,48,59,66,67,70,72,64,55,47,30,13,1,1,1,1,5,2,4,7,10,11,12,54,57,63,67,71,65,59,53,43,24,1,0,1,0,0,7,8,8,9,12,14,15,56,58,60,64,67,66,58,48,30,14,0,0,1,1,1,8,12,10,11,9,11,12,57,56,58,59,61,59,55,43,22,6,1,0,1,1,1,4,11,12,15,11,15,18,62,62,62,57,54,54,43,32,18,8,2,1,1,1,1,9,11,12,11,12,14,16,62,57,60,57,50,45,39,26,17,11,8,1,1,1,1,4,8,11,10,18,20,19,62,59,57,56,54,43,36,24,15,10,6,2,1,1,5,5,6,10,11,12,15,17,64,59,54,56,59,46,34,26,14,11,6,1,1,1,1,11,10,8,8,12,15,16,61,60,59,58,57,48,41,29,20,17,10,6,1,1,1,0,6,8,7,12,15,19,60,61,55,54,54,53,53,42,27,19,11,6,1,2,0,1,0,5,10,13,15,17,55,56,54,57,59,56,52,45,34,23,15,7,0,2,1,1,1,0,8,9,17,19,53,51,54,60,59,58,54,43,40,29,21,10,2,1,1,1,1,1,4,4,14,17,50,53,54,57,58,63,58,51,46,37,29,19,4,1,1,1,1,1,1,7,12,14,51,53,54,58,61,61,59,54,50,45,39,30,15,2,1,1,1,1,1,5,8,11,49,51,59,60,59,65,67,61,58,56,44,25,14,13,2,1,1,1,2,10,8,11,47,51,58,59,64,67,68,69,64,54,42,24,17,12,13,3,1,8,11,8,10,13,43,47,56,61,65,72,72,72,62,49,36,25,18,15,19,10,5,8,7,9,17,17,44,50,52,61,65,73,73,71,61,47,30,26,26,19,12,13,10,8,10,12,17,17,45,51,51,60,64,67,68,65,57,35,23,25,17,8,10,8,15,13,11,13,18,18,45,49,52,60,64,67,66,64,57,35,22,24,13,6,10,9,15,13,11,13,18,19],
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
