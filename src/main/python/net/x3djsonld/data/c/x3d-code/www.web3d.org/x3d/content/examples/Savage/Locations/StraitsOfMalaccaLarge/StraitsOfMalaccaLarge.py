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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(level=1,name='Geospatial'),
    meta(content='StraitsOfMalaccaLarge.x3d',name='title'),
    meta(content='Large-Area Terrain model of Straits of Malacca with no bathymetry',name='description'),
    meta(content='Byounghyun Yoo',name='creator'),
    meta(content='17 July 2008',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='upgrade Rez to X3D v3.3',name='TODO'),
    meta(content='develop ability to automatically upgrade Geo nodes to X3D v3.3 using X3dTidy stylesheet',name='TODO'),
    meta(content='Rez, http://www.rez3d.com',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Locations/StraitsOfMalaccaLarge/StraitsOfMalaccaLarge.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      GeoViewpoint(description='Default Viewpoint StraitsOfMalaccaLarge',orientation=(-1,0,0,1.57),position=(0.3471685463819618,100.89750038406439,1792095.085119945),
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=["GD"])),
      Inline(url=["./tiles/0/Malacca0-0.x3d","https://savage.nps.edu/Savage/Locations/StraitsOfMalaccaLarge/tiles/0/Malacca0-0.x3d","./tiles/0/Malacca0-0.wrl","https://savage.nps.edu/Savage/Locations/StraitsOfMalaccaLarge/tiles/0/Malacca0-0.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for StraitsOfMalaccaLarge.py")
