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
        texture=ImageTexture(url=['../../images/5/newport28-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.20080872015217,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[14,18,23,28,33,38,43,47,51,55,60,62,64,65,66,67,67,68,68,68,68,68,67,11,16,21,25,30,36,40,46,49,53,57,60,61,63,64,65,66,67,67,67,67,67,66,10,14,19,24,28,32,38,43,46,50,53,56,58,60,61,62,63,64,65,64,64,64,65,10,13,17,22,25,30,35,40,43,47,50,53,55,57,58,60,60,61,61,61,62,62,62,8,11,15,19,23,26,32,37,41,44,47,50,53,54,55,57,58,58,59,59,59,59,60,6,9,13,18,21,24,29,35,38,41,44,47,50,52,53,54,55,55,56,56,57,57,58,4,9,14,18,20,22,26,32,36,39,41,44,46,49,50,51,52,53,53,54,55,56,57,2,7,14,17,19,21,25,30,33,35,38,41,43,45,47,48,49,50,50,51,53,55,56,1,3,8,14,17,19,22,27,30,33,36,38,40,42,44,45,46,47,48,49,50,52,54,1,1,4,10,15,17,21,25,28,31,34,36,38,39,41,43,43,44,45,46,47,49,50,1,1,2,7,12,15,18,22,26,28,31,34,35,37,39,40,41,42,42,43,45,47,48,1,1,1,3,9,13,16,19,23,25,28,31,33,35,36,38,39,39,40,40,42,44,46,1,1,1,1,5,10,14,17,19,22,25,28,31,32,34,35,35,36,36,38,40,43,45,1,1,1,1,2,6,11,14,16,19,22,25,27,29,30,32,32,32,34,36,38,41,43,1,1,1,1,1,2,7,11,14,16,20,22,23,25,26,27,29,31,33,35,37,39,42,1,1,1,1,1,1,2,7,11,13,16,17,18,19,21,24,27,29,31,33,35,38,40,1,1,1,1,1,1,1,3,7,9,11,12,13,14,18,22,25,27,29,31,34,37,39,1,1,1,1,1,1,1,2,5,7,8,9,11,14,18,21,24,26,28,30,32,35,38,1,1,1,1,1,1,1,1,2,5,6,8,12,15,19,22,24,25,27,28,30,33,36,1,1,1,1,1,1,1,1,1,2,5,8,11,14,18,20,22,24,25,27,29,31,35,1,1,1,1,1,1,1,1,1,1,3,6,8,11,14,17,20,22,24,25,27,29,34,1,1,1,1,1,1,1,1,1,1,1,3,5,8,12,15,18,20,22,24,25,28,32,1,1,1,1,1,1,1,1,1,1,1,1,4,7,11,15,18,20,21,23,25,28,31],
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
