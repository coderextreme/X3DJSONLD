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
        texture=ImageTexture(url=['../../images/5/newport30-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.680214244425336,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[6,5,3,3,5,6,8,12,15,22,25,28,31,31,32,31,27,23,18,11,7,4,3,6,6,4,5,6,7,9,14,19,25,30,32,34,34,35,34,29,24,18,11,8,6,5,7,6,5,5,6,8,12,18,23,28,33,35,37,38,38,36,31,26,19,12,10,7,6,7,6,5,6,7,9,16,23,27,32,36,38,39,40,41,39,34,29,22,14,11,9,7,7,6,6,7,8,12,19,27,31,35,39,42,43,45,45,43,37,31,22,16,12,10,8,8,7,7,8,10,14,22,29,33,37,43,46,47,49,49,46,39,31,23,18,14,11,10,9,8,8,9,12,16,24,31,36,42,47,49,50,52,52,47,38,30,24,20,15,13,11,10,9,9,12,15,19,26,34,41,47,50,52,53,55,55,51,39,30,25,21,16,14,12,11,10,11,15,17,22,29,38,45,49,51,53,55,58,60,54,41,31,27,22,18,15,14,12,11,13,16,19,24,31,39,45,49,51,53,56,60,62,55,41,33,28,23,18,16,15,13,12,13,16,19,24,31,39,44,48,50,53,56,61,62,54,42,35,30,24,19,17,16,14,13,14,16,19,24,31,38,42,46,48,51,55,59,59,52,43,40,34,26,20,17,16,16,15,15,16,18,23,30,35,39,42,45,47,50,52,51,47,42,42,36,27,21,18,17,17,16,16,17,20,25,30,33,36,39,41,43,45,46,44,42,39,38,32,26,21,18,17,18,17,17,19,22,26,29,31,34,37,39,41,41,41,40,38,36,34,29,25,21,18,16,18,18,18,19,22,25,27,30,33,35,37,39,39,38,37,36,34,32,29,25,21,17,16,17,18,18,19,22,24,26,28,31,34,36,36,37,36,35,34,32,30,28,24,20,17,15,17,18,18,19,21,23,25,27,30,33,34,35,35,35,34,32,30,29,26,23,19,16,14,17,17,18,19,20,22,24,27,29,31,33,34,34,33,32,31,29,27,25,22,19,15,14,16,17,18,19,20,21,24,26,28,30,32,32,33,32,31,30,28,27,25,22,18,15,14,16,17,18,19,20,21,23,25,27,29,30,31,31,31,30,29,28,26,25,22,18,15,14,16,17,18,19,20,21,22,24,26,28,29,30,30,30,30,29,27,26,24,22,19,16,14,16,17,18,19,19,20,22,23,26,27,28,29,30,30,29,28,27,26,24,21,18,15,14],
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
