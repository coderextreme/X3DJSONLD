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
    meta(content='Rudder.x3d',name='title'),
    meta(content='Rudder for 688 Submarine',name='description'),
    meta(content='LT Ken Curtin',name='creator'),
    meta(content='10 August 2003',name='created'),
    meta(content='8 December 2003',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/ssn-688.htm',name='reference'),
    meta(content='http://www.combatindex.com/store/3d/ssn688_model.html',name='reference'),
    meta(content='Rudder, 688, Submarine',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/Rudder.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(.1,.1,.1))),
      geometry=Extrusion(creaseAngle=3,crossSection=[(0,0),(.972,.414),(2.622,.69),(4.002,.828),(5.382,.966),(6.762,.966),(8.142,.759),(8.694,.69),(9.108,.552),(9.384,.207),(9.522,0),(9.384,-.207),(9.108,-.552),(8.694,-.69),(8.142,-.759),(6.762,-.966),(5.382,-.966),(4.002,-.828),(2.622,-.69),(.972,-.414),(0,0)],scale=[(.36,.2),(.67,.5),(.18,.2)],spine=[(0,0,0),(0,4.72,0),(0,13.06,0)]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Rudder.py")
