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
    meta(content='PanamaCity.x3d',name='title'),
    meta(content='Bathymetry and terrain model of Panama City, Florida',name='description'),
    meta(content='Byounghyun Yoo',name='creator'),
    meta(content='11 May 2007',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Locations/PanamaCityFlorida/PanamaCity.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(speed=100,type=["FLY","EXAMINE","ANY"],visibilityLimit=2254678.4),
    PointLight(ambientIntensity=1,location=(0,100000,0),radius=1000000),
    #  TODO: verify correct translation value for this location through comparison with corresponding OpenMap display 
    #  TODO: automate generation of proper values by Rez itself 
    #  Registration correction: the following rotation brings the Rez coordinate system in line with North = X3D +X axis, up = X3D +Y axis, East = X3D +Z axis 
    Transform(DEF='OrientRezCoordinateSystem',rotation=(0,1,0,-1.5707963265),
      #  following translation computed by hand by Byounghyun based on corner points and scaling of Rez outputs, as well as UTM versus WGS84 conversions 
      children=[
      Transform(translation=(-148274.98,0,-79047.31),
        #  TODO: the following translation correction is the hack to align 3D terrain with OpenMap display 
        children=[
        Transform(DEF='HackTranslationCorrectionTerrainToX3d',translation=(-23000,0,-1100),
          #  
          children=[
          Collision(
            children=[
            Inline(url=["tiles/0/PanamaCity0-0.x3d","https://savage.nps.edu/Savage/Locations/PanamaCityFlorida/tiles/0/PanamaCity0-0.x3d"])])]),
        Transform(translation=(148274.98,40000,79047.31),
          children=[
          Transform(
            children=[
            Viewpoint(DEF='Vp0',description='Center view',orientation=(-1,0,0,1.5707963265))])]),
        Transform(translation=(88274.98,150000,78047.31),
          children=[
          Transform(
            children=[
            Viewpoint(DEF='Vp0-1',description='Overview',orientation=(-1,0,0,1.5707963265))])]),
        Transform(translation=(-21644.912,19677.194602272728,158729.36),
          children=[
          Transform(
            children=[
            Viewpoint(DEF='Vp1',description='Viewpoint 1',orientation=(0,1,0,-0.795))])]),
        Transform(translation=(-21644.9128347449,19677.194602272728,-28859.883),
          children=[
          Transform(
            children=[
            Viewpoint(DEF='Vp2',description='Viewpoint 2',orientation=(0,1,0,-2.356))])]),
        Transform(translation=(243505.27,19677.194602272728,-28859.883),
          children=[
          Transform(
            children=[
            Viewpoint(DEF='Vp3',description='Viewpoint 3',orientation=(0,1,0,2.356))])]),
        Transform(translation=(243505.27,19677.194602272728,173159.3),
          children=[
          Transform(
            children=[
            Viewpoint(DEF='Vp4',description='Viewpoint 4',orientation=(0,1,0,0.795))])]),
        Viewpoint(DEF='Vp5',description='Viewpoint 5',orientation=(-1,0,0,1.54),position=(66738.484,36074.855,101009.59)),
        Viewpoint(DEF='Vp6',description='Viewpoint 6',orientation=(-1,0,0,1.64),position=(39682.34,36074.855,43289.824)),
        Viewpoint(DEF='Vp7',description='Viewpoint 7',orientation=(-1,0,0,1.54),position=(174963.05,36074.855,57719.766)),
        Viewpoint(DEF='Vp8',description='Viewpoint 8',orientation=(-1,0,0,1.54),position=(189392.98,36074.855,93794.625))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PanamaCity.py")
