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
    meta(content='WinterExamples.x3d',name='title'),
    meta(content="Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterExamples.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='WinterExamples.x3d'),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter00',url=["WinterPrototypes.x3d#Winter00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter00","WinterPrototypes.wrl#Winter00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter00"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter01',url=["WinterPrototypes.x3d#Winter01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter01","WinterPrototypes.wrl#Winter01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter01"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter02',url=["WinterPrototypes.x3d#Winter02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter02","WinterPrototypes.wrl#Winter02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter02"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter03',url=["WinterPrototypes.x3d#Winter03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter03","WinterPrototypes.wrl#Winter03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter03"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter04',url=["WinterPrototypes.x3d#Winter04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter04","WinterPrototypes.wrl#Winter04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter04"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter05',url=["WinterPrototypes.x3d#Winter05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter05","WinterPrototypes.wrl#Winter05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter05"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter06',url=["WinterPrototypes.x3d#Winter06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter06","WinterPrototypes.wrl#Winter06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter06"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter07',url=["WinterPrototypes.x3d#Winter07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter07","WinterPrototypes.wrl#Winter07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter07"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter08',url=["WinterPrototypes.x3d#Winter08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter08","WinterPrototypes.wrl#Winter08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter08"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter09',url=["WinterPrototypes.x3d#Winter09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter09","WinterPrototypes.wrl#Winter09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter09"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter10',url=["WinterPrototypes.x3d#Winter10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter10","WinterPrototypes.wrl#Winter10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter10"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter11',url=["WinterPrototypes.x3d#Winter11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter11","WinterPrototypes.wrl#Winter11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter11"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter12',url=["WinterPrototypes.x3d#Winter12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter12","WinterPrototypes.wrl#Winter12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter12"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter13',url=["WinterPrototypes.x3d#Winter13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter13","WinterPrototypes.wrl#Winter13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter13"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter14',url=["WinterPrototypes.x3d#Winter14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter14","WinterPrototypes.wrl#Winter14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter14"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter15',url=["WinterPrototypes.x3d#Winter15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter15","WinterPrototypes.wrl#Winter15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter15"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter16',url=["WinterPrototypes.x3d#Winter16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter16","WinterPrototypes.wrl#Winter16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter16"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter17',url=["WinterPrototypes.x3d#Winter17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter17","WinterPrototypes.wrl#Winter17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter17"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter18',url=["WinterPrototypes.x3d#Winter18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter18","WinterPrototypes.wrl#Winter18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter18"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter19',url=["WinterPrototypes.x3d#Winter19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter19","WinterPrototypes.wrl#Winter19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter19"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter20',url=["WinterPrototypes.x3d#Winter20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter20","WinterPrototypes.wrl#Winter20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter20"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter21',url=["WinterPrototypes.x3d#Winter21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter21","WinterPrototypes.wrl#Winter21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter21"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter22',url=["WinterPrototypes.x3d#Winter22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter22","WinterPrototypes.wrl#Winter22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter22"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter23',url=["WinterPrototypes.x3d#Winter23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter23","WinterPrototypes.wrl#Winter23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter23"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter24',url=["WinterPrototypes.x3d#Winter24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter24","WinterPrototypes.wrl#Winter24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter24"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter25',url=["WinterPrototypes.x3d#Winter25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter25","WinterPrototypes.wrl#Winter25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter25"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter26',url=["WinterPrototypes.x3d#Winter26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter26","WinterPrototypes.wrl#Winter26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter26"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter27',url=["WinterPrototypes.x3d#Winter27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter27","WinterPrototypes.wrl#Winter27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter27"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter28',url=["WinterPrototypes.x3d#Winter28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter28","WinterPrototypes.wrl#Winter28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter28"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter29',url=["WinterPrototypes.x3d#Winter29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter29","WinterPrototypes.wrl#Winter29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter29"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter30',url=["WinterPrototypes.x3d#Winter30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter30","WinterPrototypes.wrl#Winter30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter30"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter31',url=["WinterPrototypes.x3d#Winter31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter31","WinterPrototypes.wrl#Winter31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter31"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter32',url=["WinterPrototypes.x3d#Winter32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter32","WinterPrototypes.wrl#Winter32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter32"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter33',url=["WinterPrototypes.x3d#Winter33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter33","WinterPrototypes.wrl#Winter33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter33"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter34',url=["WinterPrototypes.x3d#Winter34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d#Winter34","WinterPrototypes.wrl#Winter34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.wrl#Winter34"]),
    Group(bboxSize=(10.5,10.5,2.0),
      children=[
      NavigationInfo(headlight=False),
      Viewpoint(DEF='Front',description='Front view',position=(0.0,0.0,12.0)),
      Viewpoint(DEF='PersRight',description='Low Right',orientation=(0.74291,0.30772,0.59447,1.2171),position=(6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='PersLeft',description='Low Left',orientation=(0.74291,-0.30772,-0.59447,1.2171),position=(-6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='Back',description='Back view',orientation=(0.0,1.0,0.0,3.1416),position=(0.0,0.0,-12.0)),
      Transform(DEF='Close_travel',
        children=[
        PositionInterpolator(DEF='Close_Mover',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,2.5,0.0),(0.0,0.0,0.0),(0.0,-2.5,0.0),(0.0,0.0,0.0),(0.0,2.5,0.0)]),
        TimeSensor(DEF='Close_Time',cycleInterval=12.0,loop=True),
        Viewpoint(DEF='Close',description='Close Front',position=(0.0,0.0,6.0))]),
      DirectionalLight(direction=(1.0,-1.0,-1.0)),
      DirectionalLight(direction=(0.0,1.0,-0.5),intensity=0.5),
      Anchor(description='Back to front view',url=["#Front"],
        children=[
        Transform(translation=(0.0,0.0,-0.5),
          children=[
          Inline(url=["gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"])])]),
      Viewpoint(DEF='View00',description='Winter00',position=(-3.75,3.75,3.0)),
      Transform(translation=(-3.75,3.75,0.0),
        children=[
        Anchor(description='Winter00 view',url=["#View00"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter00')),
            geometry=Sphere(DEF='Ball',radius=0.5))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter00',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter00"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='TextMat',diffuseColor=(1.0,1.0,1.0))),
              geometry=Text(string=["Winter00"],
                fontStyle=FontStyle(DEF='Style',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.3,style_='BOLD')))])])]),
      Viewpoint(DEF='View01',description='Winter01',position=(-2.25,3.75,3.0)),
      Transform(translation=(-2.25,3.75,0.0),
        children=[
        Anchor(description='Winter01 view',url=["#View01"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter01')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter01',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter01"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter01"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View02',description='Winter02',position=(-0.75,3.75,3.0)),
      Transform(translation=(-0.75,3.75,0.0),
        children=[
        Anchor(description='Winter02 view',url=["#View02"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter02')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter02',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter02"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter02"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View03',description='Winter03',position=(0.75,3.75,3.0)),
      Transform(translation=(0.75,3.75,0.0),
        children=[
        Anchor(description='Winter03 view',url=["#View03"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter03')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter03',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter03"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter03"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View04',description='Winter04',position=(2.25,3.75,3.0)),
      Transform(translation=(2.25,3.75,0.0),
        children=[
        Anchor(description='Winter04 view',url=["#View04"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter04')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter04',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter04"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter04"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View05',description='Winter05',position=(3.75,3.75,3.0)),
      Transform(translation=(3.75,3.75,0.0),
        children=[
        Anchor(description='Winter05 view',url=["#View05"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter05')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter05',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter05"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter05"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View06',description='Winter06',position=(-3.75,2.25,3.0)),
      Transform(translation=(-3.75,2.25,0.0),
        children=[
        Anchor(description='Winter06 view',url=["#View06"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter06')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter06',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter06"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter06"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View07',description='Winter07',position=(-2.25,2.25,3.0)),
      Transform(translation=(-2.25,2.25,0.0),
        children=[
        Anchor(description='Winter07 view',url=["#View07"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter07')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter07',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter07"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter07"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View08',description='Winter08',position=(-0.75,2.25,3.0)),
      Transform(translation=(-0.75,2.25,0.0),
        children=[
        Anchor(description='Winter08 view',url=["#View08"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter08')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter08',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter08"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter08"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View09',description='Winter09',position=(0.75,2.25,3.0)),
      Transform(translation=(0.75,2.25,0.0),
        children=[
        Anchor(description='Winter09 view',url=["#View09"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter09')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter09',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter09"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter09"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View10',description='Winter10',position=(2.25,2.25,3.0)),
      Transform(translation=(2.25,2.25,0.0),
        children=[
        Anchor(description='Winter10 view',url=["#View10"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter10')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter10',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter10"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter10"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View11',description='Winter11',position=(3.75,2.25,3.0)),
      Transform(translation=(3.75,2.25,0.0),
        children=[
        Anchor(description='Winter11 view',url=["#View11"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter11')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter11',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter11"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter11"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View12',description='Winter12',position=(-3.75,0.75,3.0)),
      Transform(translation=(-3.75,0.75,0.0),
        children=[
        Anchor(description='Winter12 view',url=["#View12"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter12')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter12',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter12"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter12"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View13',description='Winter13',position=(-2.25,0.75,3.0)),
      Transform(translation=(-2.25,0.75,0.0),
        children=[
        Anchor(description='Winter13 view',url=["#View13"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter13')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter13',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter13"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter13"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View14',description='Winter14',position=(-0.75,0.75,3.0)),
      Transform(translation=(-0.75,0.75,0.0),
        children=[
        Anchor(description='Winter14 view',url=["#View14"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter14')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter14',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter14"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter14"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View15',description='Winter15',position=(0.75,0.75,3.0)),
      Transform(translation=(0.75,0.75,0.0),
        children=[
        Anchor(description='Winter15 view',url=["#View15"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter15')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter15',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter15"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter15"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View16',description='Winter16',position=(2.25,0.75,3.0)),
      Transform(translation=(2.25,0.75,0.0),
        children=[
        Anchor(description='Winter16 view',url=["#View16"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter16')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter16',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter16"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter16"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View17',description='Winter17',position=(3.75,0.75,3.0)),
      Transform(translation=(3.75,0.75,0.0),
        children=[
        Anchor(description='Winter17 view',url=["#View17"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter17')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter17',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter17"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter17"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View18',description='Winter18',position=(-3.75,-0.75,3.0)),
      Transform(translation=(-3.75,-0.75,0.0),
        children=[
        Anchor(description='Winter18 view',url=["#View18"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter18')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter18',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter18"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter18"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View19',description='Winter19',position=(-2.25,-0.75,3.0)),
      Transform(translation=(-2.25,-0.75,0.0),
        children=[
        Anchor(description='Winter19 view',url=["#View19"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter19')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter19',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter19"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter19"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View20',description='Winter20',position=(-0.75,-0.75,3.0)),
      Transform(translation=(-0.75,-0.75,0.0),
        children=[
        Anchor(description='Winter20 view',url=["#View20"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter20')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter20',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter20"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter20"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View21',description='Winter21',position=(0.75,-0.75,3.0)),
      Transform(translation=(0.75,-0.75,0.0),
        children=[
        Anchor(description='Winter21 view',url=["#View21"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter21')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter21',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter21"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter21"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View22',description='Winter22',position=(2.25,-0.75,3.0)),
      Transform(translation=(2.25,-0.75,0.0),
        children=[
        Anchor(description='Winter22 view',url=["#View22"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter22')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter22',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter22"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter22"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View23',description='Winter23',position=(3.75,-0.75,3.0)),
      Transform(translation=(3.75,-0.75,0.0),
        children=[
        Anchor(description='Winter23 view',url=["#View23"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter23')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter23',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter23"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter23"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View24',description='Winter24',position=(-3.75,-2.25,3.0)),
      Transform(translation=(-3.75,-2.25,0.0),
        children=[
        Anchor(description='Winter24 view',url=["#View24"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter24')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter24',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter24"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter24"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View25',description='Winter25',position=(-2.25,-2.25,3.0)),
      Transform(translation=(-2.25,-2.25,0.0),
        children=[
        Anchor(description='Winter25 view',url=["#View25"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter25')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter25',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter25"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter25"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View26',description='Winter26',position=(-0.75,-2.25,3.0)),
      Transform(translation=(-0.75,-2.25,0.0),
        children=[
        Anchor(description='Winter26 view',url=["#View26"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter26')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter26',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter26"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter26"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View27',description='Winter27',position=(0.75,-2.25,3.0)),
      Transform(translation=(0.75,-2.25,0.0),
        children=[
        Anchor(description='Winter27 view',url=["#View27"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter27')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter27',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter27"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter27"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View28',description='Winter28',position=(2.25,-2.25,3.0)),
      Transform(translation=(2.25,-2.25,0.0),
        children=[
        Anchor(description='Winter28 view',url=["#View28"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter28')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter28',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter28"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter28"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View29',description='Winter29',position=(3.75,-2.25,3.0)),
      Transform(translation=(3.75,-2.25,0.0),
        children=[
        Anchor(description='Winter29 view',url=["#View29"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter29')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter29',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter29"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter29"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View30',description='Winter30',position=(-3.75,-3.75,3.0)),
      Transform(translation=(-3.75,-3.75,0.0),
        children=[
        Anchor(description='Winter30 view',url=["#View30"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter30')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter30',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter30"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter30"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View31',description='Winter31',position=(-2.25,-3.75,3.0)),
      Transform(translation=(-2.25,-3.75,0.0),
        children=[
        Anchor(description='Winter31 view',url=["#View31"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter31')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter31',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter31"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter31"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View32',description='Winter32',position=(-0.75,-3.75,3.0)),
      Transform(translation=(-0.75,-3.75,0.0),
        children=[
        Anchor(description='Winter32 view',url=["#View32"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter32')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter32',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter32"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter32"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View33',description='Winter33',position=(0.75,-3.75,3.0)),
      Transform(translation=(0.75,-3.75,0.0),
        children=[
        Anchor(description='Winter33 view',url=["#View33"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter33')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter33',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter33"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter33"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View34',description='Winter34',position=(2.25,-3.75,3.0)),
      Transform(translation=(2.25,-3.75,0.0),
        children=[
        Anchor(description='Winter34 view',url=["#View34"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Winter34')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Winter34',parameter=["target=_source"],url=["WinterPrototypes.html#ProtoDeclare_Winter34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.html#ProtoDeclare_Winter34"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Winter34"],
                fontStyle=FontStyle(USE='Style')))])])])]),
    ROUTE(fromField='fraction_changed',fromNode='Close_Time',toField='set_fraction',toNode='Close_Mover'),
    ROUTE(fromField='value_changed',fromNode='Close_Mover',toField='set_translation',toNode='Close_travel')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WinterExamples.py")
