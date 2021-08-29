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
        texture=ImageTexture(url=['../../images/5/newport25-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63985995553778,-71.20080872015217,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[41,41,43,45,46,46,45,44,43,41,40,39,40,40,39,38,37,36,35,33,33,32,32,41,41,44,46,47,48,47,46,44,42,41,41,42,41,40,40,40,39,37,34,32,32,32,41,41,44,47,49,50,49,47,45,43,43,44,43,43,42,42,42,41,38,34,32,31,32,41,42,45,49,51,51,50,48,45,44,45,47,46,45,45,45,45,42,39,34,33,33,34,41,43,47,51,53,53,52,49,45,46,48,48,48,47,46,45,44,42,38,35,35,36,38,42,45,48,50,52,53,53,48,46,48,50,50,48,47,45,44,42,40,38,37,39,41,41,44,46,48,50,53,54,52,47,47,49,52,50,48,45,43,41,40,39,39,41,43,44,44,45,47,49,52,54,53,49,47,47,50,52,49,47,45,43,41,40,40,42,44,46,47,47,45,47,50,52,53,50,46,44,45,48,49,48,47,47,45,42,41,42,44,46,48,49,47,45,47,49,51,50,46,44,43,44,45,45,46,47,48,46,43,41,43,46,48,50,49,45,44,46,48,48,46,44,43,43,43,43,44,45,46,48,46,44,43,45,49,51,51,48,44,43,45,45,44,43,43,43,43,43,43,43,45,47,47,46,46,46,48,52,55,53,48,45,41,43,43,43,43,43,43,43,43,43,44,45,47,47,47,48,50,54,59,59,55,49,50,40,42,42,43,43,43,43,43,43,44,45,47,48,47,48,50,55,61,66,64,57,53,55,39,41,42,43,43,43,43,43,44,45,46,48,49,49,51,54,59,64,68,64,57,56,61,39,40,41,43,43,43,43,44,45,47,49,49,50,51,53,57,60,63,66,63,58,61,67,39,40,41,42,43,43,44,45,48,50,51,52,53,54,55,57,59,62,63,61,61,66,68,39,40,41,42,43,44,45,48,50,53,56,56,56,57,57,57,58,59,59,60,65,68,67,39,40,41,42,43,45,47,50,53,57,61,62,62,62,60,58,58,58,59,64,69,68,67,39,40,41,42,44,46,48,52,56,61,64,66,66,66,62,58,57,57,64,69,71,69,68,39,40,41,42,44,47,50,56,61,63,66,68,69,68,64,59,56,57,65,72,70,68,67,39,40,41,42,45,49,53,60,64,66,67,70,71,70,66,59,56,58,66,71,69,68,67,39,40,41,42,45,50,54,61,65,67,67,70,72,71,66,59,56,60,67,70,69,68,67],
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
