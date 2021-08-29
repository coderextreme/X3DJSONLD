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
    GeoViewpoint(description='GeoViewpoint_3_51',geoSystem=['GDC'],position=(3.3692936899251933,95.84375014402414,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(3.3692936899251933,95.84375014402414,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca10-2.x3d'],child2Url=['../../tiles/4/Malacca10-3.x3d'],child3Url=['../../tiles/4/Malacca11-2.x3d'],child4Url=['../../tiles/4/Malacca11-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca5-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.3619186420774487,94.8330000960161,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[-99,-99,0,1,2,1,1,0,5,11,2,0,0,3,1,2,1,0,0,0,0,0,-99,-99,0,0,0,2,2,0,2,2,5,0,-7,10,-18,65,76,7,-1,0,6,1,-99,-99,1,0,0,1,1,2,3,2,-6,-4,0,-8,393,89,0,1,12,1,1,13,-99,-99,0,0,1,3,0,1,2,2,2,6,97,68,26,0,-18,0,3,4,1,1,-99,-99,0,1,2,1,0,3,2,1,86,222,72,16,1,2,0,0,2,3,3,0,-99,-99,4,5,3,2,0,3,2,55,129,16,4,3,1,0,0,-2,3,2,3,4,-99,-99,5,6,-1,3,2,2,3,2,21,0,0,2,4,-15,-9,2,0,4,3,3,-99,-99,3,6,2,2,4,1,3,3,1,4,0,0,-3,0,-13,0,3,3,2,1,-99,-99,2,1,5,0,2,1,-4,4,0,1,0,5,11,-8,2,4,2,4,2,1,-99,-99,4,1,6,2,2,0,1,2,0,0,0,0,-5,3,1,1,3,3,2,2,-99,-99,3,4,2,3,0,-3,1,1,2,0,1,3,0,1,2,2,2,3,1,1,-99,-99,2,3,3,3,3,0,0,1,0,2,-9,14,4,8,2,1,2,2,1,0,-99,-99,2,0,0,0,0,0,-1,1,1,0,2,-1,2,1,3,4,2,3,1,1,-99,-99,0,0,0,0,1,0,1,0,0,-6,2,0,0,3,3,4,3,2,3,1,-99,-99,0,0,0,0,1,0,0,0,4,0,1,2,3,4,3,2,2,4,2,17,-99,-99,0,2,1,0,1,0,0,0,-1,3,3,2,3,3,2,16,25,13,621,349,-99,-99,1,3,0,0,0,1,1,-1,8,3,1,1,3,2,11,20,31,119,575,375,-99,-99,0,0,0,0,1,0,0,2,1,0,3,3,2,9,20,34,53,178,1026,1142,-99,-99,-1,0,0,0,0,2,0,0,0,2,1,1,39,20,32,115,196,339,1638,1662,-99,-99,0,0,0,0,0,1,1,0,1,2,8,16,18,45,105,542,900,1003,1993,2104,-99,-99,0,0,0,0,1,0,1,1,1,2,16,29,20,102,117,961,1556,1661,2337,2253,-99,-99,0,0,0,-1,2,0,0,1,1,2,17,29,21,107,113,908,1618,1544,2327,2185],
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
