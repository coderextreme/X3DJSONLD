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
        texture=ImageTexture(url=['../../images/5/newport25-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63985995553778,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[32,33,33,32,31,30,29,31,34,35,34,34,37,42,48,52,52,52,53,53,52,52,51,32,33,33,32,31,31,32,35,38,38,37,35,38,44,51,53,54,54,54,54,53,52,51,32,34,34,32,31,31,35,39,40,40,39,37,40,47,52,54,55,55,55,55,54,53,52,34,35,34,32,31,33,38,41,42,42,41,39,43,49,52,53,55,56,56,56,55,54,52,38,38,35,32,32,35,40,44,45,45,43,41,43,46,49,52,55,56,57,57,56,54,53,41,39,36,33,34,39,43,47,49,49,48,44,43,45,47,52,55,57,58,57,56,55,53,44,41,37,36,39,44,47,51,53,53,52,47,44,45,47,52,55,58,59,58,57,55,53,47,43,39,40,43,48,51,54,56,55,53,49,45,45,48,53,55,59,59,58,57,55,53,47,42,41,43,48,53,54,56,56,54,52,49,47,47,50,54,56,59,60,58,57,55,53,45,42,44,48,54,56,57,57,56,54,53,50,48,48,52,56,58,60,60,59,57,55,52,44,44,49,54,58,58,57,56,56,56,55,53,50,49,53,57,60,61,60,59,57,55,52,45,49,54,59,61,58,57,57,58,58,57,54,52,51,55,59,61,62,61,59,57,55,52,50,54,60,64,64,60,58,58,60,60,58,55,52,52,57,60,62,63,61,59,57,55,52,55,61,65,68,66,61,58,57,57,58,57,54,52,54,58,61,63,63,61,59,57,55,52,61,65,67,66,64,61,58,56,56,55,54,53,53,56,59,62,63,62,61,59,57,55,52,67,67,66,64,62,60,58,57,55,54,53,52,54,57,60,62,63,63,61,59,57,54,53,68,67,65,64,62,61,59,58,56,54,53,53,55,58,60,63,63,62,61,58,56,55,54,67,66,66,66,64,62,60,58,56,54,53,52,55,58,61,63,63,62,60,58,56,55,54,67,67,67,67,66,64,62,60,57,55,53,53,55,58,61,62,63,61,60,57,55,54,53,68,68,69,68,66,65,64,61,58,55,54,54,56,59,61,62,62,61,59,56,54,53,52,67,67,67,67,66,66,65,62,58,55,54,55,57,59,61,61,61,60,58,56,53,53,53,67,67,66,66,66,65,64,60,57,56,55,55,57,59,61,61,61,59,58,55,53,53,52,67,67,66,66,65,64,63,60,57,56,56,56,58,60,61,61,61,59,57,55,53,52,52],
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
