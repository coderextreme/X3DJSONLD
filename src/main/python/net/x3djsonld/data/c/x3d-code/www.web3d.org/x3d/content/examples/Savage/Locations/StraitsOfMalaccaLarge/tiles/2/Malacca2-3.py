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
    GeoViewpoint(description='GeoViewpoint_2_23',geoSystem=['GDC'],position=(2.3619186420774487,106.96200067211268,448023.77127998613),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.3619186420774487,106.96200067211268,0.0),range=537628.5,child1Url=['../../tiles/3/Malacca4-6.x3d'],child2Url=['../../tiles/3/Malacca4-7.x3d'],child3Url=['../../tiles/3/Malacca5-6.x3d'],child4Url=['../../tiles/3/Malacca5-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca2-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.34716854638195915,104.94050057609658,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.20215002,zDimension=22,zSpacing=0.19188096,height=[3,-99,-99,-99,-99,-99,2,1,1,1,3,0,1,1,2,1,3,0,0,0,2,4,-99,-99,-99,-99,-99,1,3,4,2,1,0,0,0,1,0,0,2,1,0,19,2,-99,-99,-99,-99,-99,2,1,3,2,2,1,1,0,0,0,0,1,0,0,20,2,-99,-99,-99,-99,-99,4,2,3,2,1,0,2,0,0,1,0,0,0,2,4,4,-99,-99,-99,-99,-99,2,2,2,1,1,0,0,0,0,0,1,0,-1,0,0,4,-99,-99,-99,-99,-99,2,0,1,1,1,0,0,1,0,0,1,3,1,3,4,1,-99,-99,-99,-99,-99,0,1,1,0,0,1,2,0,1,0,0,1,1,4,4,2,-99,-99,-99,-99,-99,0,0,0,1,2,1,1,1,0,0,0,1,0,4,3,1,-99,-99,-99,-99,-99,0,2,2,3,0,1,0,1,0,0,0,2,4,4,4,1,3,0,0,0,2,2,2,1,1,1,3,4,0,0,1,1,3,2,3,5,3,0,1,5,0,0,2,2,1,1,1,2,2,0,1,1,0,1,2,3,6,2,2,1,0,0,2,2,1,1,1,1,2,1,3,3,1,1,4,3,2,-2,2,3,1,1,2,1,1,2,1,1,1,1,2,0,2,2,2,3,4,5,2,4,2,1,2,242,2,0,0,3,2,2,0,0,1,1,0,2,1,2,2,3,-99,6,4,1,2,1,3,0,1,3,1,0,1,-27,2,1,3,1,2,2,2,-99,2,5,5,2,3,3,3,2,1,1,2,1,5,3,2,3,2,4,0,1,-99,3,1,2,3,2,3,3,2,2,1,0,0,1,2,2,3,5,2,2,1,-99,4,3,2,4,3,1,1,2,2,2,1,0,1,2,2,55,2,1,1,0,-99,3,2,2,3,2,2,1,2,2,1,0,0,1,2,1,18,3,0,0,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,0,0,1,2,57,1,0,0,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,1,0,0,1,1,0,1,1,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,1,1,0,1,1,2,1,0,0],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
