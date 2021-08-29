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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='KauaiWithTexture10nm.x3d',name='title'),
    meta(content='LT Scott Rosetti USN',name='creator'),
    meta(content='X3D-Edit',name='translator'),
    meta(content='22 May 2005',name='created'),
    meta(content='23 June 2014',name='modified'),
    meta(content='http://metcast.metnet.navy.mil/cgi-bin/mcsrvr/server',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Hawaii/KauaiWithTexture10nm.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(DEF='Initial_View',description='Initial View',jump=False,orientation=(1,0,0,-.6),position=(0.0,12157.0,25000.0)),
    Viewpoint(DEF='Layer_View',description='Layer View (500m)',jump=False,position=(0.0,-500,10000.0)),
    Viewpoint(DEF='Top_View',description='Birds Eye View',jump=False,orientation=(1,0,0,-1.57),position=(0.0,10000.0,0)),
    Viewpoint(DEF='Satelite_View',description='Satelite View (whole scene)',jump=False,orientation=(1,0,0,-1.57),position=(0.0,30051.352785759816,0)),
    Viewpoint(DEF='Layer_Side_View',description='Layer Side View (500m)',jump=False,orientation=(0,1,0,1.57),position=(10000.0,-500,0)),
    Viewpoint(DEF='Depth_Scale_View',description='Depth Scale',jump=False,position=(0.0,-1078.5,2000.0)),
    Viewpoint(DEF='Bathymetry_View',description='Bathymetry View',jump=False,orientation=(0,1,0,1.57),position=(30000.0,-1078.5,0)),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Group(
      children=[
      Transform(DEF='Terrain',translation=(-10000.0,0,-10000.0),
        children=[
        Shape(
          geometry=ElevationGrid(creaseAngle=1.57,height=[123.0,269.0,119.0,396.0,334.0,180.0,-241.0,-90.0,127.0,174.0,108.0,70.0,-983.0,-621.0,-330.0,-284.0,-383.0,-224.0,-1560.0,-1395.0,-1128.0,-958.0,-1065.0,-841.0,-1987.0,-1886.0,-1738.0,-1550.0,-1395.0,-1367.0,-2157.0,-2091.0,-1998.0,-1873.0,-1688.0,-1633.0],solid=False,xDimension=6,xSpacing=4000,zDimension=6,zSpacing=4000),
          appearance=Appearance(
            texture=ImageTexture(DEF='bath',repeatS=False,repeatT=False,url=["kauai.jpg","https://savage.nps.edu/Savage/Locations/Hawaii/kauai.jpg"]))),
        Transform(translation=(10000.0,0,10000.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(emissiveColor=(0,0,1),transparency=.65)),
            geometry=Box(size=(20000.0,0.1,20000.0)))])]),
      Transform(DEF='WATERCOLUMN',
        children=[
        Shape(
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8],solid=False,
            coord=Coordinate(point=[(-10000.0,0,-10000.0),(-10000.0,0.0,-10000.0),(-6000.0,0.0,-10000.0),(-2000.0,0.0,-10000.0),(2000.0,0.0,-10000.0),(6000.0,0.0,-10000.0),(10000.0,0.0,-10000.0),(10000.0,0,-10000.0),(-10000.0,0,-10000.0)])),
          appearance=Appearance(
            material=Material(emissiveColor=(0,0,1),transparency=.8))),
        Shape(
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8],solid=False,
            coord=Coordinate(point=[(10000.0,0,-10000.0),(10000.0,0.0,-10000.0),(10000.0,0.0,-6000.0),(10000.0,-224.0,-2000.0),(10000.0,-841.0,2000.0),(10000.0,-1367.0,6000.0),(10000.0,-1633.0,10000.0),(10000.0,0,10000.0),(10000.0,0,-10000.0)])),
          appearance=Appearance(
            material=Material(emissiveColor=(0,0,1),transparency=.8))),
        Shape(
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8],solid=False,
            coord=Coordinate(point=[(10000.0,0,10000.0),(10000.0,-1633.0,10000.0),(6000.0,-1688.0,10000.0),(2000.0,-1873.0,10000.0),(-2000.0,-1998.0,10000.0),(-6000.0,-2091.0,10000.0),(-10000.0,-2157.0,10000.0),(-10000.0,0,10000.0),(10000.0,0,10000.0)])),
          appearance=Appearance(
            material=Material(emissiveColor=(0,0,1),transparency=.8))),
        Shape(
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8],solid=False,
            coord=Coordinate(point=[(-10000.0,0,10000.0),(-10000.0,-2157.0,10000.0),(-10000.0,-1987.0,6000.0),(-10000.0,-1560.0,2000.0),(-10000.0,-983.0,-2000.0),(-10000.0,-241.0,-6000.0),(-10000.0,0.0,-10000.0),(-10000.0,0,-10000.0),(-10000.0,0,10000.0)])),
          appearance=Appearance(
            material=Material(emissiveColor=(0,0,1),transparency=.8)))])]),
    PointLight(intensity=.2,location=(0,50000,0),radius=100000)])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for KauaiWithTexture10nm.py")
