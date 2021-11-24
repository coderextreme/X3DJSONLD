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
    component(level=1,name='DIS'),
    meta(content='RadioCommunicationsObserver.x3d',name='title'),
    meta(content='Don Brutzman and Dave Laflam',name='creator'),
    meta(content='19 September 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Show how to reference ReceiverPdu SignalPdu and TransmitterPdu for radio communications',name='description'),
    meta(content='http://faculty.nps.edu/brutzman/vrtp/mil/navy/nps/dis/RadioCommunicationsObserver.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsObserver.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='RadioCommunicationsObserver.x3d'),
    Group(
      children=[
      Transform(translation=(-15,0,0),
        children=[
        ReceiverPdu(receivedPower=0.0,whichGeometry=0)]),
      Transform(
        children=[
        SignalPdu(whichGeometry=0)]),
      Transform(translation=(15,0,0),
        children=[
        TransmitterPdu(relativeAntennaLocation=(0,0,0),transmitFrequencyBandwidth=0.0,whichGeometry=0)])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RadioCommunicationsObserver.py")
