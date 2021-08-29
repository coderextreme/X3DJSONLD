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
        texture=ImageTexture(url=['../../images/5/newport31-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.68828510220285,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[16,17,18,19,19,20,22,23,26,27,28,29,30,30,29,28,27,26,24,21,18,15,14,16,17,17,18,19,20,21,23,24,26,27,28,29,29,28,27,26,25,24,21,18,15,14,16,16,17,17,18,19,20,22,24,25,27,27,28,28,27,26,25,24,23,21,18,15,14,15,16,16,17,17,18,20,21,23,24,26,27,27,27,26,25,24,23,21,20,18,15,14,14,15,16,16,17,17,19,20,22,23,25,26,26,25,24,23,23,22,20,18,17,14,13,14,15,15,15,16,17,18,20,21,23,24,25,25,24,23,22,21,20,19,17,15,12,11,14,15,15,15,15,16,17,19,20,22,23,24,24,24,23,22,20,19,17,15,13,9,8,14,14,15,15,15,16,17,18,19,21,22,23,24,24,23,21,20,18,16,14,11,8,5,14,14,14,14,14,15,16,18,19,20,21,22,23,23,22,21,19,17,14,12,9,6,3,14,14,14,14,14,15,17,18,19,20,21,22,22,22,21,20,18,16,13,9,6,2,1,14,14,14,14,15,15,17,18,19,20,21,21,21,21,20,18,17,14,12,8,4,1,1,14,14,14,14,15,16,17,18,19,20,20,20,20,19,18,17,16,13,10,5,1,1,1,14,14,13,13,15,16,16,18,18,19,19,19,19,18,17,15,14,10,7,2,1,1,1,14,13,13,13,15,16,17,17,18,18,18,18,18,17,15,13,11,7,3,1,1,1,1,14,13,13,13,14,15,16,17,17,17,18,17,17,15,13,11,9,4,1,1,1,1,1,13,13,13,13,14,15,15,16,16,16,16,16,15,13,11,10,6,2,1,1,1,1,1,13,13,13,13,13,14,15,15,15,15,15,14,12,10,9,7,3,1,1,1,1,1,1,13,12,12,12,13,13,14,14,14,14,13,12,10,9,7,4,1,1,1,1,1,1,1,13,12,12,12,12,12,13,13,13,13,12,10,9,7,4,2,1,1,1,1,1,1,1,13,13,12,11,11,12,12,12,12,11,11,9,7,6,3,1,1,1,1,1,1,1,1,14,13,12,11,10,11,11,11,11,10,10,8,6,5,2,1,1,1,1,1,1,1,1,14,13,12,11,10,9,9,10,10,9,9,7,5,3,1,1,1,1,1,1,1,1,1,15,13,13,11,10,9,9,9,9,9,8,7,4,2,1,1,1,1,1,1,1,1,1],
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
