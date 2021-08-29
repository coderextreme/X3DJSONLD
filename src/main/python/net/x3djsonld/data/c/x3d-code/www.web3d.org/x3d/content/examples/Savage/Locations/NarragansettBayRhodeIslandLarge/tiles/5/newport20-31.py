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
        texture=ImageTexture(url=['../../images/5/newport20-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[54,52,53,54,57,57,57,56,55,54,54,51,48,47,49,48,51,49,47,43,41,41,51,52,53,56,57,59,56,56,55,54,54,50,49,49,50,49,49,48,46,43,40,41,52,52,53,56,58,59,57,56,56,56,52,50,49,50,51,51,51,49,46,43,42,42,52,54,56,56,59,60,59,59,58,57,52,49,50,52,53,54,53,49,45,44,44,44,52,56,58,58,60,60,60,59,60,57,53,51,53,54,55,56,55,51,47,45,47,47,54,58,60,60,61,61,61,62,61,56,53,53,55,58,58,58,56,53,48,46,48,48,55,60,62,61,61,61,61,63,63,59,55,57,59,60,60,59,57,54,51,48,49,49,57,62,64,62,62,61,62,63,62,58,58,60,63,62,62,60,59,55,53,50,49,49,60,64,65,63,62,62,62,63,60,58,58,62,64,64,65,62,59,55,50,49,50,50,61,65,65,63,62,62,63,62,60,58,60,65,68,65,65,62,59,55,52,50,50,51,62,64,64,64,63,63,63,61,60,59,63,69,68,66,64,61,58,56,52,52,50,50,62,64,64,65,65,65,63,62,61,61,65,69,68,66,64,61,59,54,52,51,49,49,62,64,66,66,66,66,65,62,62,63,67,69,67,66,63,60,59,54,53,50,48,48,63,64,64,67,68,67,66,64,65,66,69,68,66,64,62,61,57,53,52,50,47,47,62,63,64,66,69,69,66,65,68,68,69,68,65,63,62,59,55,52,51,50,47,47,62,61,64,67,69,67,67,67,68,69,68,65,63,61,59,56,53,50,49,46,46,46,63,63,65,68,68,67,68,67,66,68,65,61,61,59,56,54,52,50,47,45,44,43,66,65,67,69,69,68,69,69,66,64,60,58,58,57,54,50,49,48,45,43,43,43,67,67,67,68,68,68,68,67,64,60,55,55,56,55,52,48,46,46,44,43,41,41,67,68,69,69,68,67,67,65,62,58,52,53,56,53,50,47,45,45,44,43,41,41,68,69,70,70,69,68,67,65,61,55,52,52,54,51,46,44,44,44,44,43,41,41,69,69,70,70,70,69,67,65,60,55,53,52,50,48,46,43,45,45,45,43,42,42,69,70,70,70,70,69,67,63,59,55,55,54,52,47,46,44,46,46,45,44,43,42,68,69,69,69,70,69,66,63,59,55,54,54,52,47,46,45,46,46,45,44,43,43],
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
